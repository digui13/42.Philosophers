/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:21:44 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:16:43 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	eating(t_philo *philo)
{
	if (philo->data->input.time_eat > philo->data->input.time_die)
	{
		dying(philo);
		drop_forks(philo);
		return (END);
	}
	if (printer(philo, "is eating") == END)
		return (END);
	pthread_mutex_lock(&philo->data->mutex.eat);
	philo->meals++;
	philo->last_meal = set_time(philo->data);
	pthread_mutex_unlock(&philo->data->mutex.eat);
	timmer(philo, philo->last_meal, philo->data->input.time_eat);
	drop_forks(philo);
	return (CONTINUE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:21:44 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 17:34:04 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	eating(t_philo *philo)
{
	if (philo->data->input.time_eat > philo->data->input.time_die)
	{
		dying(philo);
		return (END);
	}
	if (printer(philo, "is eating") == END)
		return (END);
	philo->meals++;
	philo->last_meal = set_time(philo->data);
	timmer(philo, philo->last_meal, philo->data->input.time_eat);
	sem_post(philo->data->semaphore.forks);
	return (CONTINUE);
}

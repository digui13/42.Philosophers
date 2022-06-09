/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dying.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:48:41 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:21:11 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	dying(t_philo *philo)
{
	timmer(philo, philo->last_meal, philo->data->input.time_die);
	if (printer(philo, "died") == END)
		return (END);
	pthread_mutex_lock(&philo->data->mutex.death);
	philo->data->died = YES;
	pthread_mutex_unlock(&philo->data->mutex.death);
	return (CONTINUE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:20:25 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 00:37:39 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

static int	first_fork(t_philo *philo, int *f1)
{
	pthread_mutex_lock(philo->data->mutex.fork + *f1);
	if (printer(philo, "has taken a fork") == END)
	{
		pthread_mutex_unlock(philo->data->mutex.fork + *f1);
		return (END);
	}
	if (philo->data->input.qty == 1)
	{
		pthread_mutex_unlock(philo->data->mutex.fork + *f1);
		dying(philo);
		return (END);
	}
	return (CONTINUE);
}

static int	second_fork(t_philo *philo, int *f1, int *f2)
{
	pthread_mutex_lock(philo->data->mutex.fork + *f2);
	if (printer(philo, "has taken a fork") == END)
	{
		pthread_mutex_unlock(philo->data->mutex.fork + *f1);
		pthread_mutex_unlock(philo->data->mutex.fork + *f2);
		return (END);
	}
	return (CONTINUE);
}

int	take_forks(t_philo *philo)
{
	int	f1;
	int	f2;

	if (time_to_get_fork(philo) == NO)
	{
		dying(philo);
		return (END);
	}
	which_fork(philo, &f1, &f2);
	if (first_fork(philo, &f1) == END)
		return (END);
	if (second_fork(philo, &f1, &f2) == END)
		return (END);
	return (CONTINUE);
}

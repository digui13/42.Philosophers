/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:20:25 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 19:15:23 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

static int	first_fork(t_philo *philo)
{
	if (printer(philo, "has taken a fork") == END)
		return (END);
	return (CONTINUE);
}

static int	second_fork(t_philo *philo)
{
	if (printer(philo, "has taken a fork") == END)
		return (END);
	return (CONTINUE);
}

int	take_forks(t_philo *philo)
{
	if (time_to_get_fork(philo) == NO)
	{
		dying(philo);
		return (END);
	}
	if (philo->data->input.qty == 1)
	{
		printer(philo, "has taken a fork");
		dying(philo);
		return (END);
	}
	sem_wait(philo->data->semaphore.forks);
	if (first_fork(philo) == END)
		return (END);
	if (second_fork(philo) == END)
		return (END);
	return (CONTINUE);
}

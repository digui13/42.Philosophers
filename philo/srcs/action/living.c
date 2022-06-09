/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   living.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:53:21 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/08 15:48:27 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

void	*living(void *args)
{
	t_philo		*philo;

	philo = args;
	while (1)
	{
		if (take_forks(philo) == END)
			break ;
		if (eating(philo) == END)
			break ;
		if (printer(philo, "is sleeping") == END)
			break ;
		if (philo->data->input.time_sleep + philo->data->input.time_eat
			> philo->data->input.time_die)
		{
			dying(philo);
			break ;
		}
		timmer(philo, set_time(philo->data), philo->data->input.time_sleep);
		if (printer(philo, "is thinking") == END)
			break ;
	}
	return (NULL);
}

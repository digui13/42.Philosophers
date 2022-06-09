/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat_enough.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:11:49 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 17:21:09 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	eat_enough(t_philo *philo)
{
	int	i;

	i = 0;
	if (philo->data->input.must_eat == -1)
		return (0);
	while (i < philo->data->input.qty)
	{
		pthread_mutex_lock(&philo->data->mutex.eat);
		if (philo->meals < philo->data->input.must_eat)
		{
			pthread_mutex_unlock(&philo->data->mutex.eat);
			return (NO);
		}
		pthread_mutex_unlock(&philo->data->mutex.eat);
		i++;
	}
	return (YES);
}

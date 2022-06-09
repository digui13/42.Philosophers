/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:25:33 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 17:22:58 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

void	drop_forks(t_philo *philo)
{
	int	f1;
	int	f2;

	f1 = ((philo->idx + 1) % philo->data->input.qty);
	f2 = philo->idx;
	pthread_mutex_unlock(philo->data->mutex.fork + f1);
	pthread_mutex_unlock(philo->data->mutex.fork + f2);
}

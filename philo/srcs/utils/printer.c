/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:00 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:20:04 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	printer(t_philo *philo, char *txt)
{
	pthread_mutex_lock(&philo->data->mutex.death);
	if (philo->data->died == YES || eat_enough(philo) == YES)
	{
		pthread_mutex_unlock(&philo->data->mutex.death);
		return (END);
	}
	pthread_mutex_lock(&philo->data->mutex.print);
	printf("%lld %d %s\n", set_time(philo->data), philo->idx, txt);
	pthread_mutex_unlock(&philo->data->mutex.print);
	pthread_mutex_unlock(&philo->data->mutex.death);
	return (CONTINUE);
}

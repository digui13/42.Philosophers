/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize_mutex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:26:00 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:16:43 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	inicialize_mutex(t_data *data)
{
	int	inc;

	inc = 0;
	data->mutex.fork = malloc(sizeof(pthread_mutex_t) * data->input.qty);
	if (data->mutex.fork == NULL)
		return (FAIL);
	while (inc < data->input.qty)
	{
		if (pthread_mutex_init(data->mutex.fork + inc, NULL) != NO)
			return (YES);
		inc++;
	}
	if (pthread_mutex_init(&data->mutex.print, NULL) != NO)
		return (YES);
	if (pthread_mutex_init(&data->mutex.eat, NULL) != NO)
		return (YES);
	if (pthread_mutex_init(&data->mutex.death, NULL) != NO)
		return (YES);
	return (NO);
}

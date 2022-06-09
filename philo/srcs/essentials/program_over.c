/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:17:35 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:16:43 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	program_over(t_data *data, int status)
{
	int	inc;

	inc = 0;
	if (data != NULL)
	{
		if (data->philo != NULL)
			free(data->philo);
		pthread_mutex_destroy(&data->mutex.print);
		pthread_mutex_destroy(&data->mutex.eat);
		while (inc < data->input.qty)
		{
			pthread_mutex_destroy(data->mutex.fork + inc);
			inc++;
		}
		free(data->mutex.fork);
	}
	if (status == FAIL)
	{
		printf("Error\n");
		return (FAIL);
	}
	return (SUCCESS);
}

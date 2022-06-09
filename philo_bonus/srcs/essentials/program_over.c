/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:17:35 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 17:37:18 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	program_over(t_data *data, int status)
{
	int	inc;

	inc = 0;
	waitpid(-1, NULL, 0);
	if (data != NULL)
	{
		while (inc < data->input.qty)
		{
			kill((data->philo + inc)->pid, SIGTERM);
			inc++;
		}
		if (data->philo != NULL)
			free(data->philo);
		sem_unlink("sema_forks3");
		sem_close(data->semaphore.forks);
	}
	if (status == FAIL)
	{
		printf("Error\n");
		return (FAIL);
	}
	return (SUCCESS);
}

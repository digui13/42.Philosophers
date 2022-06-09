/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:19:50 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/08 14:22:11 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	inicialize(t_data *data, int argc, char **argv)
{
	inicialize_input(argc, argv, data);
	if (inicialize_philo(data) == YES)
		return (FAIL);
	if (inicialize_time(data) == YES)
		return (FAIL);
	data->died = 0;
	sem_unlink("sema_forks3");
	data->semaphore.forks = sem_open(
			"sema_forks3", O_CREAT | O_EXCL, 0644, (data->input.qty / 2));
	return (SUCCESS);
}

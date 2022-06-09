/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   th_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:27:37 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:30:14 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	th_create(t_data *data)
{
	int	inc;
	int	error;

	inc = 0;
	while (inc < data->input.qty)
	{
		error = pthread_create(
				&(data->philo + inc)->thread,
				NULL,
				&living,
				(data->philo + inc));
		if (error != NO)
			return (FAIL);
		inc++;
	}
	return (SUCCESS);
}

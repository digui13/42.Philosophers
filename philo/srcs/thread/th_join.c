/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   th_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:38:26 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 17:00:42 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	th_join(t_data *data)
{
	int	inc;
	int	error;

	inc = 0;
	while (inc < data->input.qty)
	{
		error = pthread_join((data->philo + inc)->thread, NULL);
		if (error != NO)
			return (FAIL);
		inc++;
	}
	return (SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize_philo.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:26:49 by dpestana          #+#    #+#             */
/*   Updated: 2022/03/31 17:04:19 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	inicialize_philo(t_data *data)
{
	int	inc;

	inc = 0;
	data->philo = malloc(sizeof(t_philo) * data->input.qty);
	if (data->philo == NULL)
		return (FAIL);
	while (inc < data->input.qty)
	{
		(data->philo + inc)->idx = inc;
		(data->philo + inc)->meals = 0;
		(data->philo + inc)->last_meal = 0;
		(data->philo + inc)->data = data;
		inc++;
	}
	return (SUCCESS);
}

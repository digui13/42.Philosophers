/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:26:33 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 16:49:16 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

void	inicialize_input(int argc, char **argv, t_data *data)
{
	data->input.qty = ft_atoi(*(argv + 1));
	data->input.time_die = ft_atoi(*(argv + 2));
	data->input.time_eat = ft_atoi(*(argv + 3));
	data->input.time_sleep = ft_atoi(*(argv + 4));
	if (argc == 6)
		data->input.must_eat = ft_atoi(*(argv + 5));
	else
		data->input.must_eat = -1;
}

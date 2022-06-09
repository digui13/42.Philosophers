/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:19:50 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 14:05:03 by dpestana         ###   ########.fr       */
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
	if (inicialize_mutex(data) == YES)
		return (FAIL);
	data->died = 0;
	return (SUCCESS);
}

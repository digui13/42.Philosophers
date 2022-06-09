/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize_time.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:27:22 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 17:02:41 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	inicialize_time(t_data *data)
{
	if (gettimeofday(&data->time.now, NULL) != NO)
		return (YES);
	if (gettimeofday(&data->time.begin, NULL) != NO)
		return (YES);
	return (NO);
}

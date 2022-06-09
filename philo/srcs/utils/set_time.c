/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:27:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 16:55:08 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

long long	set_time(t_data *data)
{
	long long	micro;
	long long	second;	

	gettimeofday(&data->time.now, NULL);
	micro = ((data->time.now.tv_usec - data->time.begin.tv_usec) / 1000);
	second = ((data->time.now.tv_sec - data->time.begin.tv_sec) * 1000);
	return (second + micro);
}

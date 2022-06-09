/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timmer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:45:40 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:21:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

void	timmer(t_philo *philo, long long time_now_ms, long long time_to)
{
	while (1)
		if ((set_time(philo->data) - time_now_ms) >= time_to)
			break ;
}

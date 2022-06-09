/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_to_get_fork.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:36:16 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/08 15:50:59 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	time_to_get_fork(t_philo *philo)
{
	int	p_qty;
	int	te;
	int	td;

	p_qty = philo->data->input.qty;
	te = philo->data->input.time_eat;
	td = philo->data->input.time_die;
	if (philo->meals > 0 && p_qty > 1 && p_qty % 2 == 0 && (te * 2) > td)
		return (NO);
	else if (philo->meals > 0 && p_qty > 1 && p_qty % 2 != 0 && (te * 3) > td)
		return (NO);
	else
		return (YES);
}

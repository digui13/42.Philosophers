/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_forks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:21:00 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 14:42:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

void	get_forks(t_philo *philo, int *f1, int *f2, int status)
{
	if (status != 1)
	{
		*f1 = (philo->idx + 1) % philo->data->input.qty;
		*f2 = philo->idx;
	}
	else
	{
		*f1 = philo->idx;
		*f2 = (philo->idx + 1) % philo->data->input.qty;
	}
}

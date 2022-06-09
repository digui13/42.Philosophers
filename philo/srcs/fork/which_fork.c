/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_fork.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:21:16 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 17:23:07 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

void	which_fork(t_philo *philo, int *f1, int *f2)
{
	if (philo->idx % 2)
	{
		if (philo->data->input.qty % 2 == 0)
			get_forks(philo, f1, f2, 1);
		else
			get_forks(philo, f1, f2, 0);
	}
	else
	{
		if (philo->data->input.qty % 2 == 0)
			get_forks(philo, f1, f2, 0);
		else
			get_forks(philo, f1, f2, 1);
	}
}

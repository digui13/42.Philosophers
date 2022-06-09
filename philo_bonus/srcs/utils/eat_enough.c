/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat_enough.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:11:49 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/08 14:22:33 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	eat_enough(t_philo *philo)
{
	int	i;

	i = 0;
	if (philo->data->input.must_eat == -1)
		return (0);
	while (i < philo->data->input.qty)
	{
		if (philo->meals < philo->data->input.must_eat)
			return (NO);
		i++;
	}
	return (YES);
}

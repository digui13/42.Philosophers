/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dying.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:48:41 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 15:37:52 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	dying(t_philo *philo)
{
	timmer(philo, philo->last_meal, philo->data->input.time_die);
	if (printer(philo, "died") == END)
		return (END);
	philo->data->died = YES;
	return (CONTINUE);
}

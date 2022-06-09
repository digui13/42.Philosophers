/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:00 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/08 14:22:39 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

int	printer(t_philo *philo, char *txt)
{
	if (philo->data->died == YES || eat_enough(philo) == YES)
		return (END);
	printf("%lld %d %s\n", set_time(philo->data), philo->idx, txt);
	return (CONTINUE);
}

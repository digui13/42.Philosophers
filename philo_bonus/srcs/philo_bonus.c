/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:21:08 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:12 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/philo.h"

int	main(int argc, char **argv)
{
	t_data	data;
	int		inc;

	inc = 0;
	if (check_input(argc, argv) == FAIL)
		return (program_over(NULL, FAIL));
	if (inicialize(&data, argc, argv) == FAIL)
		return (program_over(&data, FAIL));
	while (inc < data.input.qty)
	{
		(data.philo + inc)->pid = fork();
		if ((data.philo + inc)->pid == 0)
			living(data.philo + inc);
		inc++;
	}
	return (program_over(&data, SUCCESS));
}

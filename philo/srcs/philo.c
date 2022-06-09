/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:21:08 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 17:16:51 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/philo.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (check_input(argc, argv) == FAIL)
		return (program_over(NULL, FAIL));
	if (inicialize(&data, argc, argv) == FAIL)
		return (program_over(&data, FAIL));
	if (th_create(&data) == FAIL)
		return (program_over(&data, FAIL));
	if (th_join(&data) == FAIL)
		return (program_over(&data, FAIL));
	return (program_over(&data, SUCCESS));
}

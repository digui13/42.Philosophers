/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:10:53 by dpestana          #+#    #+#             */
/*   Updated: 2022/05/31 16:52:49 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

static int	is_number(char *str)
{
	int	inc;

	inc = 0;
	if (*(str + inc) == '+' || *(str + inc) == '-')
		inc++;
	while ('0' <= *(str + inc) && *(str + inc) <= '9')
		inc++;
	if (*(str + inc) == '\0'
		&& '0' <= *(str + inc - 1) && *(str + inc - 1) <= '9')
		return (YES);
	else
		return (NO);
}

static int	is_integer(char *str)
{
	int		int_len;
	int		str_len;

	str_len = ft_strlen(str);
	int_len = 10;
	if (*str == '-' && str_len < int_len + 1)
		return (1);
	if (str_len < int_len)
		return (1);
	if (*str == '-' && ft_strncmp("2147483648", (str + 1), int_len) < 0)
		return (NO);
	if (ft_strncmp("2147483647", str, int_len) < 0)
		return (NO);
	return (YES);
}

int	check_input(int argc, char **argv)
{
	int	inc;

	inc = 1;
	if (argc <= 4)
		return (1);
	if (argc >= 7)
		return (1);
	while (inc < argc)
	{
		if (is_number(*(argv + inc)) == NO)
			return (FAIL);
		if (is_integer(*(argv + inc)) == NO)
			return (FAIL);
		inc++;
	}
	return (SUCCESS);
}

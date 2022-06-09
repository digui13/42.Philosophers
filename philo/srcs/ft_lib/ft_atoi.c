/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:03:43 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:31:59 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

static int	is_negative(int cnt, const char *nptr)
{
	if (*(nptr + cnt) == '-'
		&& ('0' <= *(nptr + (cnt + 1)) && *(nptr + (cnt + 1)) <= '9'))
		return (YES);
	return (NO);
}

static int	is_invalid(int cnt, const char *nptr)
{
	if ((*(nptr + cnt) == '-' || *(nptr + cnt) == '+')
		&& !('0' <= *(nptr + (cnt + 1)) && *(nptr + (cnt + 1)) <= '9'))
		return (YES);
	return (NO);
}

static int	is_special_char(int cnt, const char *nptr, int found_num)
{
	char	ch;

	ch = *(nptr + cnt);
	if ((ch == '+' || ch == '-' || (9 <= ch && ch <= 13) || ch == 32)
		&& found_num == 0)
		return (YES);
	return (NO);
}

static int	add_number(int cnt, const char *nptr, int *num)
{
	*num *= 10;
	*num += (*(nptr + cnt) - 48);
	return (YES);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	cnt;
	int	found_num;
	int	isnegative;

	num = 0;
	cnt = 0;
	found_num = 0;
	isnegative = 0;
	while (*(nptr + cnt) != '\0')
	{
		if (is_special_char(cnt, nptr, found_num) && is_invalid(cnt, nptr))
			return (num);
		else if (is_special_char(cnt, nptr, found_num))
			isnegative = is_negative(cnt, nptr);
		else if ('0' <= *(nptr + cnt) && *(nptr + cnt) <= '9')
			found_num = add_number(cnt, nptr, &num);
		else
			break ;
		cnt++;
	}
	if (isnegative == YES)
		num *= (-1);
	return (num);
}

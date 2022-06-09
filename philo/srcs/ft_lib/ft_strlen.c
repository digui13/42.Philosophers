/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:03:51 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/03 13:46:27 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/philo.h"

size_t	ft_strlen(const char *s)
{
	int	inc;

	inc = 0;
	while (*(s + inc) != '\0')
		inc++;
	return ((size_t)inc);
}

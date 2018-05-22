/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:05:03 by lbrangie          #+#    #+#             */
/*   Updated: 2018/05/22 14:05:57 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long			ft_atol(const char *str)
{
	long			nbr;
	char			neg;

	nbr = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
		nbr = ((nbr * 10) + (*str++ - 48));
	return (neg ? -nbr : nbr);
}

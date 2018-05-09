/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:43:15 by lbrangie          #+#    #+#             */
/*   Updated: 2018/05/09 11:25:28 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	unsigned int	i;
	int				nbr;
	char			sign;

	i = 0;
	nbr = 0;
	sign = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = ((nbr * 10) + (str[i] - 48));
		i++;
	}
	return (sign ? -nbr : nbr);
}

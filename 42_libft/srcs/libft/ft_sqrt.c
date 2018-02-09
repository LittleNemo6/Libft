/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:07:08 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/07 11:47:38 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				ft_sqrt(int nb)
{
	int				i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		if ((i * i) > nb)
		{
			ft_putnbr(nb);
			ft_putstr_endl(" DOESN'T HAVE A PERFECT SQRT !");
			return (0);
		}
		i++;
	}
	return (0);
}

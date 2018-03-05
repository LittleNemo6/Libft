/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:51:09 by lbrangie          #+#    #+#             */
/*   Updated: 2018/03/05 15:31:59 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_outnbr(int n)
{
	unsigned int	i;

	if (n < 0)
		ft_putchar('-');
	i = ft_abs(n);
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + 48);
}

int				ft_putnbr(int n)
{
	ft_outnbr(n);
	return (ft_numlen(n));
}

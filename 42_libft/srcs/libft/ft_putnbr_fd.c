/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:02:26 by lbrangie          #+#    #+#             */
/*   Updated: 2018/03/05 15:31:58 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_outnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
		ft_putchar_fd('-', fd);
	i = ft_abs(n);
	if (i >= 10)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putnbr_fd((i % 10), fd);
	}
	else
		ft_putchar_fd((i + 48), fd);
}

int				ft_putnbr_fd(int n, int fd)
{
	ft_outnbr_fd(n, fd);
	return (ft_numlen(n) + 1);
}

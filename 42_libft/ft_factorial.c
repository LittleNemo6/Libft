/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:32:55 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/30 10:49:16 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_factorial(int nb)
{
	if (nb > 12)
	{
		ft_putnbr(nb);
		ft_putendl("! IS TOO BIG FOR AN INT!");
		return (0);
	}
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (nb);
	return (nb * ft_factorial(nb - 1));
}

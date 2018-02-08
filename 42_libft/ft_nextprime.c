/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:38:59 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/07 11:00:11 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_nextprime(int n)
{
	if (ft_isprime(n))
		n++;
	while (!ft_isprime(n))
		n++;
	return (n);
}
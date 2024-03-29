/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:09:41 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/09 14:56:59 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**	- The ft_isprime function tests if the integer n is a prime number.
**	We concider all the prime numbers except 0, 1 and, of course,
**	every negativ numbers.
**
**	RETURN VALUES
**	- ft_isprime returns 1 if the test is true or 0 if the test is false.
*/

int				ft_isprime(int n)
{
	int				i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i < n)
		if (!(n % i++))
			return (0);
	return (1);
}

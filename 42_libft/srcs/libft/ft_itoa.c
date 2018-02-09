/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:39:21 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/28 17:26:17 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	len;
	char			*fresh;

	i = 0;
	if (n == FT_INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(ft_abs(n));
	if (!(fresh = ft_strnew(len + ft_isneg(n))))
		return (NULL);
	if (ft_isneg(n))
		fresh[len] = '-';
	n = ft_abs(n);
	while ((len - i) > 0)
	{
		fresh[i++] = (n % 10) + 48;
		n = n / 10;
	}
	return (ft_strrev(fresh));
}

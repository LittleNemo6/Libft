/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 11:28:00 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/14 13:49:22 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa_base(int value, int base)
{
	char			*str_base;
	char			*fresh;
	unsigned int	i;
	int				len;

	if (!value)
		return (ft_strdup("0"));
	len = ft_numlen_base(ft_abs(value), base);
	if (base < 2 || base > 16 || !(fresh = ft_strnew(len + ft_isneg(value))))
		return (NULL);
	if (value < 0 && base == 10)
		fresh[len] = '-';
	i = 0;
	str_base = STR_BASE;
	while (value)
	{
		fresh[i++] = str_base[ft_abs(value % base)];
		value /= base;
	}
	return (ft_strrev(fresh));
}

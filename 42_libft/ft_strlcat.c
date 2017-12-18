/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:30:18 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:36:10 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	flen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	flen = dlen + slen;
	if (size <= (ft_strnlen(dst, size) + 1))
		return (ft_strnlen(dst, size) + slen);
	while (src[i] != '\0')
	{
		if (dlen < size - 1)
		{
			dst[dlen] = src[i];
			dlen++;
		}
		i++;
	}
	dst[dlen] = '\0';
	return (flen);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:30:18 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/07 11:48:00 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			len;

	len = ft_strlen(dst);
	if (size <= len)
		return (ft_strlen(src) + size);
	ft_strncat(dst, src, size - len - 1);
	return (ft_strlen(src) + len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 20:42:27 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:37:24 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strnlen(const char *s, size_t maxlen)
{
	size_t			len;

	len = 0;
	while (len < maxlen)
	{
		if (!s[len])
			return (len);
		len++;
	}
	return (maxlen);
}

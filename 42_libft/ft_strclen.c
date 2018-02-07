/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:37:55 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/07 11:31:09 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strclen(const char *s, char c)
{
	int				size;

	size = 0;
	while (*s != c && *s)
	{
		size++;
		s++;
	}
	return (size);
}

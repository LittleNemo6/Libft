/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:37:55 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/25 11:38:08 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strclen(char const *s, int i, char c)
{
	int				size;

	size = 0;
	while (ft_isascii(s[i]) && s[i] != c && s[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

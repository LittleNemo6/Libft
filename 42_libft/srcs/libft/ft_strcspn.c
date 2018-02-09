/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:03:00 by lbrangie          #+#    #+#             */
/*   Updated: 2018/01/15 15:59:00 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strcspn(const char *s, const char *charset)
{
	size_t			i;
	size_t			j;

	if (!s || !charset)
		return (-1);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (charset[j])
			if (s[i] == charset[j++])
				return (i);
		i++;
	}
	return (i);
}

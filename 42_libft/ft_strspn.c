/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:21:00 by lbrangie          #+#    #+#             */
/*   Updated: 2018/01/15 15:58:57 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strspn(const char *s, const char *charset)
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
			if (charset[j++] == s[i])
				break ;
		if (!charset[j])
			break ;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:45:34 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 13:07:58 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char			**tab;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(tab) * (ft_cntwrd(s, c) + 2))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			if (!(tab[j++] = ft_strsub(s, i, ft_strclen(&s[i], c))))
				return (NULL);
			i = i + ft_strclen(&s[i], c);
		}
	}
	tab[j] = NULL;
	return (tab);
}

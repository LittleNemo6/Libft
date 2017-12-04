/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntwrd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:32:46 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:23:15 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_cntwrd(const char *s, char c)
{
	unsigned int	i;
	size_t			nb_wrd;
	unsigned char	lever;

	i = 1;
	nb_wrd = 0;
	lever = 1;
	while (s[++i])
	{
		if (ft_isascii(s[i]) && s[i] != c)
		{
			if (lever)
				nb_wrd++;
			lever = 0;
		}
		if (s[i] == c)
			lever = 1;
	}
	return (nb_wrd);
}

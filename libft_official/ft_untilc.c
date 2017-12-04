/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untilc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:04:45 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:38:41 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_untilc(char const *s, int i, char c)
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

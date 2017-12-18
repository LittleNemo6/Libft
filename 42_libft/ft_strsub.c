/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:18:43 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:45:20 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	while (s[start] && i < len)
		fresh[i++] = s[start++];
	return (fresh);
}

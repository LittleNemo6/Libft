/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 10:54:51 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/01 11:00:39 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strndup(const char *s1, size_t n)
{
	unsigned int	i;
	char			*fresh;

	i = 0;
	if (!(fresh = ft_strnew(n)))
		return (NULL);
	while (s1[i] && i < n)
	{
		fresh[i] = s1[i];
		i++;
	}
	return (fresh);
}

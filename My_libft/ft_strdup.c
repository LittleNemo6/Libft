/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:53:44 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:35:31 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	unsigned int	i;
	unsigned int	len;
	char			*fresh;

	i = 0;
	len = ft_strlen(s1);
	if (!(fresh = ft_strnew(len)))
		return (0);
	while (i < len)
	{
		fresh[i] = s1[i];
		i++;
	}
	return (fresh);
}

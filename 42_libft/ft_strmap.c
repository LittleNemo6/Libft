/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:20:24 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/07 11:36:29 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(const char *s, char (*f)(char))
{
	unsigned int	i;
	char			*fresh;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(fresh = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(s[i]);
		i++;
	}
	return (fresh);
}

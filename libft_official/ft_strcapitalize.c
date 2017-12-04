/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:05:56 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:34:03 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (NULL);
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (ft_islower(str[0]))
			str[0] -= 32;
		if (!ft_isgraph(str[i]))
			if (ft_islower(str[i + 1]) && str[i + 1])
				str[i + 1] -= 32;
		if (ft_ispunct(str[i]))
			if (ft_islower(str[i + 1]) && str[i + 1])
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}

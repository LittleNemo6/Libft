/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:40:06 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:38:03 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char*)haystack);
	while (haystack[i])
	{
		if (haystack[i] != needle[j])
			i++;
		else
		{
			index = i;
			while (haystack[i++] == needle[j++])
				if (!needle[j])
					return ((char*)&haystack[index]);
			i = index + 1;
			j = 0;
		}
	}
	return (NULL);
}

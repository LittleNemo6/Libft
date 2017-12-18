/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:53:46 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:37:30 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;

	i = 0;
	j = 0;
	if (needle[0] == 0 || !ft_strcmp(haystack, needle))
		return ((char*)haystack);
	while (haystack[i] && i < n)
	{
		if (haystack[i] != needle[j])
			i++;
		else
		{
			index = i;
			while (haystack[i++] == needle[j++] && ((i - 1) < n))
				if (!needle[j])
					return ((char*)&haystack[index]);
			i = index + 1;
			j = 0;
		}
	}
	return (NULL);
}

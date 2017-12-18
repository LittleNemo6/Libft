/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:41:16 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/28 10:33:37 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	int				j;
	char			*fresh;

	if (!s)
		return (NULL);
	i = 0;
	j = (ft_strlen(s) - 1);
	while (j >= 0 && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	if (j == -1)
		return (fresh = ft_strnew(0));
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (s[i]))
		i++;
	return (fresh = ft_strsub(s, i, (j - i + 1)));
}

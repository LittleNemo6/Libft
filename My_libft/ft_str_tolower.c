/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:45:09 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/28 13:58:18 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_str_tolower(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (ft_isupper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

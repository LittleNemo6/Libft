/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:27:39 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/28 13:57:19 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_str_toupper(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (ft_islower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

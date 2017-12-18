/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:30:28 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:21:38 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isascii(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isascii(*str++))
			return (0);
	return (1);
}

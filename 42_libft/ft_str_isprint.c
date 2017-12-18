/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:57:17 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:24:20 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isprint(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isprint(*str++))
			return (0);
	return (1);
}

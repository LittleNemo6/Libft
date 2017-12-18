/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isgraph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:38:56 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:23:12 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isgraph(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isgraph(*str++))
			return (0);
	return (1);
}

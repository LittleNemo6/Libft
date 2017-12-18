/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isblank.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:32:26 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:21:59 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isblank(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isblank(*str++))
			return (0);
	return (1);
}

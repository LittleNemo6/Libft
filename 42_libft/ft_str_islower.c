/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_islower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:58:03 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:23:40 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_islower(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_islower(*str++))
			return (0);
	return (1);
}

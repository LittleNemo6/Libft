/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:25:10 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:18:04 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isalnum(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isalnum(*str++))
			return (0);
	return (1);
}

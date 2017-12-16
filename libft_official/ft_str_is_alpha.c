/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:50:29 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:18:55 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_is_alpha(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isalpha(*str++))
			return (0);
	return (1);
}

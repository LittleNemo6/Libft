/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isspace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:44:36 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:25:09 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isspace(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isspace(*str++))
			return (0);
	return (1);
}

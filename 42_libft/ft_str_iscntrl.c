/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_iscntrl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:35:13 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:22:20 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_iscntrl(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_iscntrl(*str++))
			return (0);
	return (1);
}

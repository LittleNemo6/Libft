/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:02:33 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 15:25:33 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_str_isupper(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isupper(*str++))
			return (0);
	return (1);
}

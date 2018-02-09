/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_endl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 15:54:47 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 16:04:46 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putstr_endl(const char *s)
{
	size_t			len;

	if (!s)
		return (-1);
	if ((write(1, s, len = ft_strlen(s)) == -1) || (write(1, "\n", 1) == -1))
		return (-1);
	return (len + 1);
}

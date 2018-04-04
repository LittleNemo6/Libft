/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_ubase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:55:21 by lbrangie          #+#    #+#             */
/*   Updated: 2018/04/04 13:55:40 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_numlen_ubase(uintmax_t n, int base)
{
	size_t			len;

	len = 1;
	while (n /= base)
		len++;
	return (len);
}

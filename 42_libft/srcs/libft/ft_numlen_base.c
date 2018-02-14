/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 11:10:16 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/14 11:27:40 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_numlen_base(int n, int base)
{
	size_t			len;

	len = 1;
	while (n /= base)
		len++;
	return (len);
}
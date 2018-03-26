/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 11:10:16 by lbrangie          #+#    #+#             */
/*   Updated: 2018/03/26 18:15:15 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_numlen_base(long long n, int base)
{
	size_t			len;

	len = 0;
	while (ft_power(base, len) - 1 < n)
		len++;
	return (len);
}

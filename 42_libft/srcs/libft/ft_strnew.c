/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:02:57 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:37:18 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnew(size_t size)
{
	char			*fresh;

	if (!(fresh = (char*)malloc(sizeof((*fresh)) * (size + 1))))
		return (NULL);
	ft_bzero(fresh, size + 1);
	return (fresh);
}

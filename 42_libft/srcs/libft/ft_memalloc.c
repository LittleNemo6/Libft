/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:54:32 by lbrangie          #+#    #+#             */
/*   Updated: 2018/06/13 13:02:39 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memalloc(size_t size)
{
	void			*fresh;

	if (!(fresh = (void*)malloc(sizeof((*fresh)) * size)))
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}

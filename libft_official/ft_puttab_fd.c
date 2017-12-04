/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:03:52 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:33:23 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_puttab_fd(char **tab, int fd)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		ft_putendl_fd(tab[i], fd);
		i++;
	}
}

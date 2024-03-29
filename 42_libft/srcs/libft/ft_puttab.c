/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:38:06 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/07 11:46:58 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_puttab(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr_endl(tab[i]);
		i++;
	}
}

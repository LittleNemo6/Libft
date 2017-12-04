/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nb_tetra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:45:42 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/01 12:36:04 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

unsigned int	ft_get_nb_tetra(char *str)
{
	unsigned int	dot;
	unsigned int	hash;
	unsigned int	endl;

	dot = 0;
	hash = 0;
	endl = 0;
	while (*str)
	{
		if (*str != '.' && *str != '#' && *str != '\n')
			ft_error(str);
		if (*str == '.')
			dot++;
		if (*str == '#')
			hash++;
		if (*str == '\n')
			endl++;
		str++;
	}
	if (hash < 4 || dot % 4 || hash % 4 || (endl + 1) % 5)
		ft_error(str);
	return (hash / 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_connec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:40:49 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/01 13:21:49 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

unsigned int	ft_get_connec(char *str)
{
	int				i;
	unsigned int	connec;

	i = 0;
	connec = 0;
	while (str[i])
	{
		if (str[i] == '#' && str[i + 1] == '#')
			connec++;
		if (i - 1 >= 0 && str[i] == '#' && str[i - 1] == '#')
			connec++;
		if (i + 5 <= 20 && str[i] == '#' && str[i + 5] == '#')
			connec++;
		if (i - 5 >= 0 && str[i] == '#' && str[i - 5] == '#')
			connec++;
		i++;
	}
	return (connec);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:22:45 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/04 16:43:49 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_ftos(char *file)
{
	int				fd;
	unsigned int	i;
	char			str[545];
	char			buff[1];

	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		ft_error(str);
	while (read(fd, buff, 1))
	{
		str[i++] = buff[0];
		if (i > 545)
			ft_error(str);
	}
	str[i] = '\0';
	if (close(fd) == -1)
		ft_error(str);
	return (ft_strdup(str));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:35:43 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/28 11:54:48 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putfile(const char *file_name)
{
	int				fd_file;
	int				len;
	char			*line;

	if ((fd_file = open(file_name, O_RDONLY)) == -1)
		return (-1);
	len = 0;
	while (get_next_line(fd_file, &line))
		len += ft_putstr_endl(line);
	if (close(fd_file) == -1)
		return (-1);
	return (len);
}

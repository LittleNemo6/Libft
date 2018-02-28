/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:50:21 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/28 11:54:19 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putfile_fd(const char *file_name, int fd)
{
	int				fd_file;
	int				len;
	char			*line;

	if ((fd_file = open(file_name, O_RDONLY)) == -1)
		return (-1);
	len = 0;
	while (get_next_line(fd_file, &line))
		len += ft_putstr_endl_fd(line, fd);
	if (close(fd_file) == -1)
		return (-1);
	return (len);
}

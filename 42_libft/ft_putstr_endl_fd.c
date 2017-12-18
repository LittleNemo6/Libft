/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_endl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:02:15 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 16:04:42 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putstr_endl_fd(const char *s, int fd)
{
	size_t			len;

	if (!s)
		return (-1);
	if ((write(fd, s, len = ft_strlen(s)) == -1) || (write(fd, "\n", 1) == -1))
		return (-1);
	return (len + 1);
}

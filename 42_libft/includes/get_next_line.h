/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:48:56 by lbrangie          #+#    #+#             */
/*   Updated: 2018/01/11 13:34:59 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft.h"

# define BUFF_SIZE 1024

int				get_next_line(const int fd, char **line);

#endif

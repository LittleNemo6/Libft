/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:31:46 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/04 16:43:48 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../../GitPerso/Libft/My_libft/libft.h"

# include <stdio.h>

typedef struct	s_lst
{
	char			*str;
	char			name;
	int				p[3][2];
	struct s_lst	*next;
}				t_lst;

char			*ft_ftos(char *file);
t_lst			*ft_set_list(unsigned int nb_tetra, char *str);
unsigned int	ft_get_connec(char *str);
unsigned int	ft_get_nb_tetra(char *str);
void			ft_error(char *str);
void			ft_error_list(t_lst *list);
int				check_char(char *buff);
int				check_form_nbr(char *buff, t_lst *ls);
int				bric(char *buff, int i, int rep, t_lst *ls);
int				dir(int rep, t_lst *ls);
int				free_case(t_lst *ls);

#endif

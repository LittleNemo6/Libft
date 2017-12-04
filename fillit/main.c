/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:39:39 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/04 16:42:43 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int ac, char **av)
{
	char			*str;
	t_lst			*list;
	unsigned int	nb_tetra;
	int				dim;

	if (ac != 2)
	{
		ft_putendl("usage:\t./fillit source_file");
		return (0);
	}
	str = ft_ftos(av[1]);
	nb_tetra = ft_get_nb_tetra(str);
	list = ft_set_list(nb_tetra, str);
	check_form_nbr(list->str);
	dim = ft_find_dim(nb_tetra);
	tab = ft_newtab(dim);
	while (!ft_solve(tab, list))
	{
		free(tab);
		dim++;
		tab = ft_newtab(dim);
	}
	ft_diplay(tab);
	free(list);
	free(tab);
	return (0);
}

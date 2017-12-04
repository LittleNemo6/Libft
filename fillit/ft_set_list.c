/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:29:21 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/04 16:43:54 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_lst			*ft_set_list(unsigned int nb_tetra, char *str)
{
	char			c;
	t_lst			*list;
	t_lst			*tmp;
	unsigned int	i;

	c = 'A';
	i = 0;
	if (!(list = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	tmp = list;
	while (nb_tetra > 0)
	{
		tmp->str = ft_strndup(&str[i], 20);
		if (ft_get_connec(tmp->str) != 6 && ft_get_connec(tmp->str) != 8)
			ft_error_list(list);
		tmp->name= c++;
		i += 21;
		if (!(tmp->next = (t_lst*)malloc(sizeof(t_lst))))
			return (NULL);
		tmp = tmp->next;
		nb_tetra--;
	}
	tmp->next = NULL;
	free(tmp);
	return (list);
}

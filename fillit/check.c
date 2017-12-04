/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:35:57 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/04 16:43:50 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_char(char *buff)
{
	int	i;
	int	j;
	int	error;
	int	nb_piece;

	i = 0;
	error = 0;
	nb_piece = 0;
	if (ft_strlen(buff) < 20)
		error = 1;
	while (buff[i + 1] && error == 0)
	{
		j = 0;
		while (j < 4)
		{
			if (buff[i + j] != '#' && buff[i + j] != '.')
				error = 1;
			(buff[i+j] == '#') ? nb_piece++ : 0;
		}
		i = i + 4;
		if (buff[i] != '\n')
			error = 1;
		i++;
	}
	if ((error == 1) || ((ft_strlen(buff) == 21) && buff[20] != '\n') || \
			nb_piece != 4)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}

int		check_form_nbr(char *buff, t_lst *ls)
{
	if (bric(buff, 0, 0, ls) < 4)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}

int		bric(char *buff, int i, int rep, t_lst *ls)
{
	if (!(buff[i]) || buff[i] == '\0')
		return (0);
	else if (rep == 0 && buff[i] == '.' && buff[i + 1] != '\n')
		return (bric(buff, (i + 1), 0, ls));
	else if (rep == 0 && buff[i] == '.' && buff[i + 1] == '\n')
		return (bric(buff, (i + 2), 0, ls));
	else if (rep == 0 && buff[i] == '#')
		return (1 + bric(buff, (i + 1), 20, ls) + bric(buff, (i + 5), 10, ls));
	else if ((rep / 10) == 1 && buff[i] == '#')
		return (dir(rep, ls) + bric(buff, (i + 1), (20 + 1 + (rep % 10)), ls) \
				+ bric(buff, (i + 5), (10 + 1 + (rep % 10)), ls) \
					+ bric(buff, (i - 1), (30 + 1 + (rep % 10)), ls));
	else if (rep >= 30 && buff[i] == '#')
		return (dir(rep, ls) + bric(buff, (i - 1), (30 + 1 + (rep % 10)), ls) \
				+ bric(buff, (i + 5), (10 + 1 + (rep % 10)), ls));
	else if ((rep / 10) == 2 && buff[i] >= 1)
		return (dir(rep, ls) + bric(buff, (i + 1), (20 + 1 + (rep % 10)), ls) \
				+ bric(buff, (i + 5), (10 + 1 + (rep % 10)), ls));
	return (0);
}

int		dir(int rep, t_lst *ls)
{
	int	mv;
	int	place;

	mv = (rep % 10);
	place = free_case(ls);
	if (place == 3)
		return (1);
	if ((rep / 10) == 1)
	{
		ls->p[place][1] = ls->p[mv][1] + 1;
		ls->p[place][0] = ls->p[mv][0];
	}
	else if ((rep / 10) == 2)
	{
		ls->p[place][0] = ls->p[mv][0] + 1;
		ls->p[place][1] = ls->p[mv][1];
	}
	else if ((rep / 10) == 3)
	{
		ls->p[place][0] = ls->p[mv][0] - 1;
		ls->p[place][1] = ls->p[mv][1];
	}
	return (1);
}

int		free_case(t_lst *ls)
{
	if (!(ls->p[0][0]) && !(ls->p[0][1]))
		return (0);
	else if (!(ls->p[1][0]) && !(ls->p[1][1]))
		return (1);
	else if (!(ls->p[2][0]) && !(ls->p[2][1]))
		return (2);
	else
		return (3);
}

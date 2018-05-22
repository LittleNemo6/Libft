/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 14:08:10 by lbrangie          #+#    #+#             */
/*   Updated: 2018/05/21 10:16:19 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_tab
{
	int				*tab;
	int				size;
	int				index;
}				t_tab;

static void		ft_free_tabs(t_tab *tab_one, t_tab *tab_two)
{
	free(tab_one);
	free(tab_two);
}

static void		ft_merge(int *tab, int start, int half, int end)
{
	t_tab			tab_one;
	t_tab			tab_two;

	tab_one.size = half - start + 1;
	tab_two.size = end - half;
	if (!(tab_one.tab = (int*)malloc(sizeof(*tab_one.tab) * tab_one.size)) || \
		!(tab_two.tab = (int*)malloc(sizeof(*tab_two.tab) * tab_two.size)))
		return ;
	tab_one.index = -1;
	tab_two.index = -1;
	while (++tab_one.index < tab_one.size)
		tab_one.tab[tab_one.index] = tab[start + tab_one.index];
	while (++tab_two.index < tab_two.size)
		tab_two.tab[tab_two.index] = tab[half + 1 + tab_two.index];
	tab_one.index = 0;
	tab_two.index = 0;
	while (tab_one.index < tab_one.size && tab_two.index < tab_two.size)
		(tab_one.tab[tab_one.index] <= tab_two.tab[tab_two.index]) ? \
		(tab[start++] = tab_one.tab[tab_one.index++]) : \
		(tab[start++] = tab_two.tab[tab_two.index++]);
	while (tab_one.index < tab_one.size)
		tab[start++] = tab_one.tab[tab_one.index++];
	while (tab_two.index < tab_two.size)
		tab[start++] = tab_two.tab[tab_two.index++];
	ft_free_tabs(tab_one, tab_two);
}

void			ft_merge_sort(int *tab, int start, int end)
{
	int				half;

	if (start < end)
	{
		half = start + (end - start) / 2;
		ft_merge_sort(tab, start, half);
		ft_merge_sort(tab, half + 1, end);
		ft_merge(tab, start, half, end);
	}
}

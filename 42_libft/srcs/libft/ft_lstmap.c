/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:01:19 by lbrangie          #+#    #+#             */
/*   Updated: 2017/11/22 15:29:02 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*fresh;
	t_list			*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	fresh = tmp;
	if (!lst || !tmp)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
	}
	return (fresh);
}

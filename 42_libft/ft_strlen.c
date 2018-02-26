/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_magic_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:13:51 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/26 18:43:34 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strlen_ret(unsigned long higm, unsigned long lowm, \
		unsigned long *lword_ptr, unsigned long lword)
{
	char			*cp;
	int				index;
	int				limit;

	limit = 4;
	if (sizeof(lword) > 4)
		limit = 8;
	while (1)
		if ((lword = *lword_ptr++) && (((lword - lowm) & ~lword & higm) != 0))
		{
			cp = (char *)(lword_ptr - 1);
			while (index < limit)
				if (cp[index++] == 0)
					return (cp + --index);
		}
}

size_t			ft_strlen(const char *str)
{
	const char		*char_ptr;
	unsigned long	*longword_ptr;
	unsigned long	longword;
	unsigned long	himagic;
	unsigned long	lomagic;

	char_ptr = str;
	while (((unsigned long)char_ptr & (sizeof(longword) - 1)) != 0)
		if (*char_ptr++ == '\0')
			return (--char_ptr - str);
	longword_ptr = (unsigned long *)char_ptr;
	himagic = 0x80808080L;
	lomagic = 0x01010101L;
	if (sizeof(longword) > 4)
	{
		himagic = ((himagic << 16) << 16) | himagic;
		lomagic = ((lomagic << 16) << 16) | lomagic;
	}
	if (sizeof(longword) > 8)
		abort();
	return (ft_strlen_ret(himagic, lomagic, longword_ptr, longword) - str);
}

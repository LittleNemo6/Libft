/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memprnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:47:43 by lbrangie          #+#    #+#             */
/*   Updated: 2018/06/13 13:08:11 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		dsp_hex(unsigned char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;
	char			*str;

	j = 0;
	str = STR_BASE_LO;
	while ((j < 16) && ((i + j) < size))
	{
		ft_putchar(str[(*(ptr + i + j) / 16) % 16]);
		ft_putchar(str[*(ptr + i + j) % 16]);
		if (j % 2)
			ft_putchar(' ');
		j++;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j++;
	}
}

void			ft_memprnt(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)addr;
	while (i < size)
	{
		dsp_hex(ptr, size, i);
		j = 0;
		while ((j < 16) && ((i + j) < size))
		{
			if (*(ptr + i + j) >= 32 && *(ptr + i + j) <= 126)
				ft_putchar((char)*(ptr + i + j));
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
}

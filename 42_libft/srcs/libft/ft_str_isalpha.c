/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:50:29 by lbrangie          #+#    #+#             */
/*   Updated: 2018/02/09 15:09:03 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**	- The ft_str_isalpha function tests if the string str is full of
**	upper-case or lower-case letters.
**	This includes the following characters (preceded by their decimal values) :
**		 65 'A'		 66 'B'		 67 'C'		 68 'D'		 69 'E'
**		 70 'F'		 71 'G'		 72 'H'		 73 'I'		 74 'J'
**		 75 'K'		 76 'L'		 77 'M'		 78 'N'		 79 'O'
**		 80 'P'		 81 'Q'		 82 'R'		 83 'S'		 84 'T'
**		 85 'U'		 86 'V'		 87 'W'		 88 'X'		 89 'Y'
**		 90 'Z'		 97 'a'		 98 'b'		 99 'c'		100 'd'
**		101 'e'		102 'f'		103 'g'		104 'h'		105 'i'
**		106 'j'		107 'k'		108 'l'		109 'm'		110 'n'
**		111 'o'		112 'p'		113 'q'		114 'r'		115 's'
**		116 't'		117 'u'		118 'v'		119 'w'		120 'x'
**		121 'y'		122 'z'
**
** RETURN VALUES
**	- ft_str_isalpha returns 1 if the test is true or 0 if the test is false.
*/

int				ft_str_isalpha(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isalpha(*str++))
			return (0);
	return (1);
}

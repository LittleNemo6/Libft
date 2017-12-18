/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:19:26 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/18 14:59:46 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**	- The ft_isascii function tests if the interger c is an ASCII character
**	(between 0 and 127 inclusive).
**
** ARGUMENTS
**	- c is the integer that the function will test.
**
** RETURN VALUES
**	- ft_isascii returns 1 if the test is true or 0 if test is false.
*/

int				ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

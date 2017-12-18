/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:28:35 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/18 15:00:48 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**	- The ft_isblank function tests if the interger c is a space or
**	tab character.
**	This includes the following characters (preceded by their decimal values) :
**		  9 '\t'		 32 ' '
**
** ARGUMENTS
**	- c is the integer that the function will test.
**
** RETURN VALUES
**	- ft_isblank returns 1 if the test is true or 0 if test is false.
*/

int				ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

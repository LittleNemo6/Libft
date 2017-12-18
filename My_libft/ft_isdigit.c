/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:14:07 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/18 18:44:40 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**	- The ft_isdigit function tests if the interger c is a decimal digit 
**	character.
**	This includes the following characters (preceded by their decimal values) :
**		 48 '0'		 49 '1'		 50 '2'		 51 '3'		 52 '4'		 53 '5'
**		 54 '6'		 55 '7'		 56 '8'		 57 '9'
**
** ARGUMENTS
**	- c is the integer that the function will test.
**
** RETURN VALUES
**	- ft_isdigit returns 1 if the test is true or 0 if test is false.
*/

int				ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

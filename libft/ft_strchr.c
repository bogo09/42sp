/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:09:40 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/11 23:14:44 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		cont;

	if (!str)
		return (NULL);
	cont = 0;
	while (str[cont])
	{
		if ((unsigned char ) str[cont] == (unsigned char ) c)
			return (((char*) str) + cont);
		cont++;
	}
	if ((unsigned char ) str[cont] == (unsigned char ) c)
		return (((char*) str) + cont);
	return (NULL);
}

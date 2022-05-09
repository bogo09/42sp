/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:39:34 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/09 22:43:56 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cont;
	char			*s2;

	if (!s || !f)
		return (NULL);
	s2 = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!s2)
		return (NULL);
	cont = 0;
	while (s[cont])
	{
		s2[cont] = f(cont, s[cont]);
		cont++;
	}
		s2[cont] = '\0';
	return (s2);
}

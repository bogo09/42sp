/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:09:40 by gapedros          #+#    #+#             */
/*   Updated: 2022/04/27 21:17:56 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont])
		cont++;
	return (cont);
}

char	*ft_strchr(const char *str, int c)
{
	int		cont;
	int		len;
	char	*str2;

	str2 = (char *)str;
	cont = 0;
	len = ft_strlen(str2);
	if (c == '\0')
		return (&str2[len]);
	while (str2[cont])
	{
		if (str2[cont] == c)
			return (&str2[cont]);
		cont++;
	}
	return (0);
}

int main()
{
	
}
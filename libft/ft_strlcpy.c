/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:27:10 by gapedros          #+#    #+#             */
/*   Updated: 2022/04/27 20:52:42 by gapedros         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (src == 0)
		return (0);
	if (size > 0)
	{
		while (*src && cont < (size - 1))
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	return (ft_strlen(src));
}

int main()
{
	char a[20]="Proplays";
	char b[20]="Testadsae";
	int c = 5;

	printf("Return is %zu.\n", ft_strlcpy(a, b, c));
}
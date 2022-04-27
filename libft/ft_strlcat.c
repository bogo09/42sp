/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:53:51 by gapedros          #+#    #+#             */
/*   Updated: 2022/04/27 21:09:26 by gapedros         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont_src;
	size_t	cont_dst;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	cont_dst = len_dst;
	if (dst == src)
		return (0);
	if (size && cont_dst < (size - 1))
	{
		cont_src = 0;
		while (cont_dst < (size - 1) && src[cont_src])
		{
			dst[cont_dst] = src[cont_src];
			cont_dst++;
			cont_src++;
		}
		dst[cont_dst] = '\0';
	}
	if (len_dst > size)
		return (size + len_src);
	return (len_dst + len_src);
}

int main()
{
	
}
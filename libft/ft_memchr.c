/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:06:49 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/02 23:12:11 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*x;

	src = (unsigned char *) s;
	x = (unsigned char) c;
	while (n)
	{
		if (*src == x)
			return (src);
		n--;
		str++;
	}
	return (NULL);
}

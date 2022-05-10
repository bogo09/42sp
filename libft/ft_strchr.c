/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:09:40 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/10 22:33:01 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:19:30 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/10 22:30:14 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		cont;
	int		len;
	char	*str2;

	str2 = (char *)str;
	len = ft_strlen(str2);
	cont = len - 1;
	if (c == '\0')
		return (&str2[len]);
	while (cont >= 0)
	{
		if (str2[cont] == c)
			return (&str2[cont]);
		cont--;
	}
	return (0);
}

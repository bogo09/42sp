/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:19:30 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/11 23:51:40 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		cont;

	cont = ft_strlen(str);
	while (cont >= 0)
	{
		if ((unsigned char) str[cont] == (unsigned char) c)
			return ((char *)(str + cont));
		cont--;
	}
	return (0);
}

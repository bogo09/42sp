/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:23:23 by coder             #+#    #+#             */
/*   Updated: 2022/05/12 00:03:23 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;
	unsigned char *s1;
	unsigned char *s2;

	if (!str1 || !str2 || !num)
		return (0);
	i = 0;
	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	while ((s1[i] == s2[i]) && (i < (num - 1)))
		i++;
	return ((int)(str1[i] - str2[i]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:25:47 by gapedros          #+#    #+#             */
/*   Updated: 2022/04/27 21:42:23 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	cont_s1;
	size_t	cont_s2;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (str2[0] == '\0')
		return (str1);
	cont_s1 = 0;
	while (str1[cont_s1])
	{
		cont_s2 = 0;
		if (str1[cont_s1] == str2[0])
		{
			while (str1[cont_s1 + cont_s2] == str2[cont_s2]
				&& (cont_s2 + cont_s1) < len && str2[cont_s2])
				cont_s2++;
			if (str2[cont_s2] == '\0')
				return (&str1[cont_s1]);
		}
		cont_s1++;
	}
	return (0);
}

int main()
{
	
}
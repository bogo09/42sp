/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:53:08 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/09 22:16:05 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	letters(const char *s, char c)
{
	int	cont;
	int	cond;
	int	number;

	cont = 0;
	cond = 0;
	number = 0;
	while (cont <= (int)ft_strlen(s))
	{
		if (s[cont] != c && s[cont] != '\0' && cond == 0)
		{
			number++;
			cond = 1;
		}
		else if (s[cont] == c)
			cond = 0;
		cont++;
	}
	return (number);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		cond;
	char	**s2;

	s2 = malloc((letters(s, c) + 1) * sizeof(char *));
	if (!s || !s2)
		return (NULL);
	i = 0;
	j = 0;
	flag = -1;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && cond < 0)
			flag = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && cond >= 0)
		{
			s2[j++] = ft_substr(s, cond, i - cond);
			cond = -1;
		}
		i++;
	}
	s2[j] = 0;
	return (s2);
}

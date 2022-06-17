/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:33:30 by gapedros          #+#    #+#             */
/*   Updated: 2022/06/17 14:50:56 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = 0;
	return (str - len);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	size_t	counter;

	counter = 0;
	len = ft_strlen(s1);
	str = (char *) malloc((len * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	while (counter < len + 1)
	{
		str[counter] = s1[counter];
		counter++;
	}
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	if (!str)
		return (0);
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		counter;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	counter = s_len - start;
	if (counter > (int) len)
		counter = len;
	if (counter <= 0)
		counter = 0;
	str = (char *) malloc((counter * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	str[counter] = 0;
	while (counter > 0)
	{
		str[counter - 1] = s[start + counter - 1];
		counter--;
	}
	return (str);
}

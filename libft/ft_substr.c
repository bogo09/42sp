/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:40:45 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/04 23:00:08 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont])
		cont++;
	return (cont);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	char	*str;
	size_t	start_copy;

	start_copy = ((size_t)start);
	if (!s)
		return (NULL);
	str = malloc((len + 1) * sizeof(char)); /*huh?*/
	if (!str)
		return (NULL);
	cont = 0;
	while (cont < len && start_copy < ft_strlen(s))
	{
		str[cont] = s[start_copy + cont];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}

int main()
{
	
}
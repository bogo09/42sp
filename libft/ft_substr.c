/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:40:45 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/10 22:33:31 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	char	*str;
	size_t	start_copy;

	start_copy = ((size_t)start);
	if (!s)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
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
//what is line 34
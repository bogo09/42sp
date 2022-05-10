/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:32:05 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/10 22:30:17 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	cont;
	size_t			size;
	char			*s2;

	cont = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[cont] && ft_strchr(set, s1[cont]))
		cont++;
	size = ft_strlen(s1) - 1;
	while (size && ft_strchr(set, s1[size]))
		size--;
	s2 = ft_substr(s1, cont, (size - cont + 1));
	return (s2);
}

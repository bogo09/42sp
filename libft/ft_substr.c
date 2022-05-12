/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:40:45 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/12 00:15:42 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (start > len_str)
		return (ft_strdup(""));
	if (len_str - start > len)
		size = len + 1;
	else
		size = len_str - start + 1;
	str = (char *) malloc((size) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}
//what is "str = malloc((len + 1) * sizeof(char)); - ex line 33"
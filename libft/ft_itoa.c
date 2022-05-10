/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:20:37 by gapedros          #+#    #+#             */
/*   Updated: 2022/05/10 22:27:07 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_zero(int n)
{
	if (n == 0)
		return (1);
	return (0);
}

static int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	length(int n)
{
	int				l;
	unsigned int	num;

	l = 0;
	num = n;
	if (is_negative(1))
	{
		num = num * -1;
		l++;
	}
	while (num > 0)
	{
		num = num / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				l;
	unsigned int	num;

	num = n;
	l = length(n);
	if (is_zero(n))
		l++;
	if (is_negative(n))
		num = (unsigned int)n * -1;
	res = (char *)malloc(l + 1);
	if (!res)
		return (0);
	res[l--] = '\0';
	while (l >= 0 && num > 0)
	{
		res[l] = (num % 10) + '0';
		num = num / 10;
		l--;
	}
	if (is_zero(n))
		res[l] = '0';
	if (is_negative(n))
		res[l] = '-';
	return (res);
}

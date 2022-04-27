/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:42:35 by gapedros          #+#    #+#             */
/*   Updated: 2022/04/27 23:49:18 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	cont;
	int	result;
	int	sign;

	cont = 0;
	while (str[cont] == '\t' || str[cont] == '\n' || str[cont] == '\r'
		|| str[cont] == '\v' || str[cont] == '\f' || str[cont] == ' ')
	cont++;
	sign = 0;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			sign++;
		cont++;
	}
	result = 0;
	while (str[cont] >= 48 && str[cont] <= 57)
	{
		result = result * 10 + str[cont] - 48;
		cont++;
	}
	if (sign > 0)
		result = result * (-1);
	return (result);
}

int main()
{
	
}
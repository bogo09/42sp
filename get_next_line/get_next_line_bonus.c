/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapedros <gapedros@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:33:58 by gapedros          #+#    #+#             */
/*   Updated: 2022/06/17 14:53:28 by gapedros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*str_buff[OPEN_MAX];
	char		*print;

	print = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf_mv(fd, &str_buff[fd]);
	str_buff[fd] = print_mv(str_buff[fd], &print);
	if (ft_strlen(print) == 0)
	{
		free(print);
		free(str_buff[fd]);
		str_buff[fd] = NULL;
		return (NULL);
	}
	return (print);
}

void	buf_mv(int fd, char **str_buff)
{
	char	*buff;
	char	*temp;
	int		b_read;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (buff == NULL)
		return ;
	b_read = read(fd, buff, BUFFER_SIZE);
	if (b_read >= 0 && buff)
		buff[b_read] = 0;
	else
	{
		free(buff);
		return ;
	}
	if (*str_buff == NULL && b_read >= 0 && ft_strlen(buff))
		*str_buff = ft_strdup(buff);
	else if (ft_strlen(buff) && *str_buff)
	{
		temp = ft_strdup(*str_buff);
		free(*str_buff);
		*str_buff = ft_strjoin(temp, buff);
		free(temp);
	}
	buff_nl(fd, buff, &str_buff);
}

void	buff_nl(int fd, char *buff, char ***str_buff)
{
	char	*temp;
	int		count;
	int		b_read;

	count = 0;
	while (buff[count] && buff[count] != '\n')
	{
		if (!buff[count + 1])
		{
			b_read = read(fd, buff, BUFFER_SIZE);
			buff[b_read] = 0;
			if (b_read > 0)
			{
				temp = ft_strdup(**str_buff);
				free(**str_buff);
				**str_buff = ft_strjoin(temp, buff);
				free(temp);
			}
			count = -1;
		}
		count++;
	}
	free(buff);
}

char	*print_mv(char *str_buff, char **print)
{
	char	*str_buff_2;
	int		count;
	int		len;

	if (str_buff == NULL)
		return (NULL);
	count = -1;
	len = 0;
	while (++count, str_buff[count] && str_buff[count] != '\n')
		len++;
	if (str_buff[count] == '\n')
		len++;
	*print = malloc(len * sizeof(char) + 1);
	count = -1;
	while (++count, str_buff[count] && str_buff[count] != '\n')
		(*print)[count] = str_buff[count];
	if (str_buff[count] == '\n')
	{
		(*print)[count] = '\n';
		count++;
	}
	(*print)[count] = 0;
	str_buff_2 = ft_substr(str_buff, count, ft_strlen(str_buff) - count);
	free(str_buff);
	return (str_buff_2);
}

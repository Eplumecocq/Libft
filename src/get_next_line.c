/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:16:28 by eplumeco          #+#    #+#             */
/*   Updated: 2016/02/09 14:52:12 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		addup_line(char **line, char *str)
{
	char	*new_line;
	int		length;

	new_line = ft_strchr(str, '\n');
	if (new_line)
	{
		*new_line = '\0';
		*line = ft_strdup(str);
		new_line++;
		length = ft_strlen(new_line);
		ft_memmove(str, new_line, length + 1);
		return (1);
	}
	if (ft_strlen(str) > 0)
	{
		*line = ft_strdup(str);
		*str = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*str = NULL;
	char		buff[BUFF_SIZE + 1];
	int			ret;
	char		*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (str == NULL)
		str = ft_strnew(0);
	while (!ft_strchr(str, '\n'))
	{
		ret = read(fd, buff, BUFF_SIZE);
		if (ret == -1)
			return (ret);
		if (ret == 0)
			return (addup_line(line, str));
		buff[ret] = '\0';
		tmp = ft_strjoin(str, buff);
		ft_strdel(&str);
		str = tmp;
	}
	return (addup_line(line, str));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:27:09 by chanhapa          #+#    #+#             */
/*   Updated: 2022/05/12 20:23:13 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*backup[OPEN_MAX];
	char		buff[BUFFER_SIZE + 1];
	char		*line;
	int			read_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	while ((read_line = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		backup[fd] = ft_strjoin(backup[fd], buff);

	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:20:42 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/28 15:41:00 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = ft_fill_line(buffer, fd);
	if (line == 0)
		return (0);
	return (line);
}
/* 
#include <fcntl.h>

int main(void)
{
	int fd;
	char *str;
	str = "";

	fd = open("file.txt", O_RDONLY);
	while (str != NULL)
	{
		str = get_next_line(fd);
		if (str != NULL)
			printf("%s", str);
		free(str);
	}
	return (0);
}
 */
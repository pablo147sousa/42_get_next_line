/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:20:42 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/26 15:07:47 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char	*line;

	ft_fill_buffer(buffer, fd);
	if (buffer == 0)
		return (0);
	line = 0;
	line = ft_strjoin_nl(line, buffer);
	if (line == 0)
		return (0);
	printf("BUFFER:%s\n", buffer);
	return(line);
}


#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("OUTPUT:%s", line);
	/* while(line != 0)
	{
		printf("%s", line);
		line = get_next_line(fd);
	} */
	free(line);
	close(fd);
	return (0);
}

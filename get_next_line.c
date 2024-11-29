/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:20:42 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/29 14:35:02 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		fd;
// 	char	*str;
// 	char	*src;

// 	str = "";
// 	src = "file2.txt";
// 	fd = open(src, O_RDONLY);
// 	while (str != NULL)
// 	{
// 		str = get_next_line(fd);
// 		if (str != NULL)
// 			printf("%s", str);
// 		free(str);
// 	}
// 	return (0);
// }

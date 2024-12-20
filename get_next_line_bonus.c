/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:55:17 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/02 15:02:42 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;

	if (FOPEN_MAX < 0 || fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (0);
	line = ft_fill_line(buffer[fd], fd);
	if (line == 0)
		return (0);
	return (line);
}

// int	main(void)
// {
// 	int		fds[3];
// 	int		i;
// 	char	*str[3];

// 	str[0] = "";
// 	str[1] = "";
// 	str[2] = "";
// 	i = 0;
// 	fds[0] = open("file.txt", O_RDONLY);
// 	fds[1] = open("file2.txt", O_RDONLY);
// 	fds[2] = open("file3.txt", O_RDONLY);
// 	while (1)
// 	{
// 		str[i] = get_next_line(fds[i]);
// 		if (str[i] != 0)
// 			printf("FD[%d]:%s", i, str[i]);
// 		free(str[i]);
// 		i++;
// 		if(i == 3)
// 			i = 0;
// 		if (!str[0] && !str[1] && !str[2])
// 			break;
// 	}
// 	close(fds[0]);
// 	close(fds[1]);
// 	close(fds[2]);
// 	return (0);
// }
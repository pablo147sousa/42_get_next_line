/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:22:15 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/26 15:07:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_len_nl(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0 && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

void	ft_fill_buffer(char *buffer, int fd)
{
	read(fd, buffer, BUFFER_SIZE);
	
}

char	*ft_strjoin_nl(char *line, char *buffer)
{
	char	*join;
	ssize_t	i;

	if (line == 0)
	{
		line = (char *) malloc(1);
		line[0] = 0;
	}
	join = (char *) malloc((ft_len_nl(line) +ft_len_nl(buffer) + 1) * sizeof(char));
	if (join == 0)
		return (0);
	i = -1;
	while(line[++i])
		join[i] = line[i];
	while (*buffer && *buffer != '\n')
	{
		join[i++] = *buffer;
		buffer++;
	}
	if(*buffer == '\n')
		join[i] = '\n';
	free(line);
	join[i + 1] = 0;
	return (join);
}

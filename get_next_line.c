/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:20:42 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/21 14:42:50 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

/* char	*get_next_line(int fd)
{
	static char	*output[BUFFER_SIZE + 1];

	
	while()
	return(0);
}
 */
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	// int	ind;
	static char *output[BUFFER_SIZE + 1];

	fd = open("text", O_RDONLY);
	// ind = 0;
	while (read(fd, output, BUFFER_SIZE) > 0)
	{
		write(1, &output, BUFFER_SIZE);
	}
	return (0);
}

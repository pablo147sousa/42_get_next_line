/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:22:15 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/21 14:25:26 by pmoreira         ###   ########.fr       */
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
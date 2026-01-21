/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:15:09 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/09 16:47:45 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*fill_line_buffer(int fd, char *left_c, char *buffer)
{
	char	*temp;
	int		b_r;

	if (read(fd, 0, 0) < 0)
	{
		free(left_c);
		return (NULL);
	}
	while (!(fd < 0 || BUFFER_SIZE <= 0))
	{
		b_r = read(fd, buffer, BUFFER_SIZE);
		buffer[b_r] = '\0';
		if (left_c == NULL)
			left_c = ft_strdup(buffer);
		else
		{
			temp = left_c;
			left_c = ft_strjoin(temp, buffer);
			free(temp);

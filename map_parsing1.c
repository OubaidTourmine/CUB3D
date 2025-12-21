/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:44:08 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/12 17:34:27 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	is_identifier_line(char *line)
{
	if (!line)
		return (0);
	while (*line == ' ' || *line == '\t')
		line++;
	if (ft_strncmp(line, "NO", 2) == 0 && (line[2] == ' ' || line[2] == '\t'))
		return (1);
	if (ft_strncmp(line, "SO", 2) == 0 && (line[2] == ' ' || line[2] == '\t'))
		return (1);
	if (ft_strncmp(line, "WE", 2) == 0 && (line[2] == ' ' || line[2] == '\t'))
		return (1);
	if (ft_strncmp(line, "EA", 2) == 0 && (line[2] == ' ' || line[2] == '\t'))
		return (1);
	if (ft_strncmp(line, "F", 1) == 0 && (line[1] == ' ' || line[1] == '\t'))
		return (1);
	if (ft_strncmp(line, "C", 1) == 0 && (line[1] == ' ' || line[1] == '\t'))
		return (1);
	return (0);
}

int	is_empty_line(char *line)
{
	if (!line)
		return (1);
	while (*line)
	{
		if (*line != ' ' && *line != '\t' && *line != '\n' && *line != '\r')
			return (0);
		line++;
	}
	return (1);
}

void	check_map(char **map)

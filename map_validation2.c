/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:56:43 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/17 13:47:54 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	is_valid_neighbor(char **map, int y, int x, int height)
{
	int	line_len;

	if (y < 0 || y >= height)
		return (0);
	line_len = get_line_length(map[y]);
	if (x < 0 || x >= line_len || !map[y][x] || map[y][x] == '\n')
		return (0);
	if (map[y][x] == ' ')
		return (0);
	return (1);
}

int	check_cell_closed(char **map, int y, int x, int height)
{
	if (!is_valid_neighbor(map, y - 1, x, height))
		return (0);
	if (!is_valid_neighbor(map, y + 1, x, height))
		return (0);
	if (!is_valid_neighbor(map, y, x - 1, height))
		return (0);
	if (!is_valid_neighbor(map, y, x + 1, height))
		return (0);
	return (1);
}

int	validate_all_spaces_closed(char **map, int height)
{
	int	i;
	int	j;
	int	line_len;

	i = 0;
	while (i < height)
	{
		line_len = get_line_length(map[i]);
		j = 0;
		while (j < line_len)
		{
			if (map[i][j] == '0' || map[i][j] == 'N' || map[i][j] == 'S'
				|| map[i][j] == 'E' || map[i][j] == 'W')
			{

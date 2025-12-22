/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:44:08 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/13 18:52:45 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static char	**extract_map2(char **lines, int start, int count)
{
	char	**map;
	int		k;
	int		j;

	map = malloc((count + 1) * sizeof(char *));
	if (!map)
		return (NULL);
	k = 0;
	j = start;
	while (lines[j])
	{
		if (!is_empty_line(lines[j]))
		{
			map[k++] = lines[j];
		}
		j++;
	}
	map[k] = NULL;
	return (map);
}

char	**extract_map(char **lines, int *map_start_idx)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (lines[i] && (is_identifier_line(lines[i])
			|| is_empty_line(lines[i])))
		i++;
	if (map_start_idx)
		*map_start_idx = i;
	count = 0;
	j = i;
	while (lines[j])
	{

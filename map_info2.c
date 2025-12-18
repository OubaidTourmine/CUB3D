/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:44:01 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/10 17:04:19 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	process_line(t_cub_info *info, char *line, t_texture_count *cnt)
{
	int	j;

	j = 0;
	while (line[j] == ' ' || line[j] == '\t')
		j++;
	if (ft_strncmp(&line[j], "NO", 2) == 0 && ++cnt->no)
		info->north = line;
	else if (ft_strncmp(&line[j], "SO", 2) == 0 && ++cnt->so)
		info->south = line;
	else if (ft_strncmp(&line[j], "WE", 2) == 0 && ++cnt->we)
		info->west = line;
	else if (ft_strncmp(&line[j], "EA", 2) == 0 && ++cnt->ea)
		info->east = line;

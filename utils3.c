/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:12:17 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/15 21:28:13 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	rotate_camera(t_game *game, double angle)
{
	double	old_dirx;
	double	old_planex;

	old_dirx = game->player.dir_x;
	old_planex = game->camera.plane_x;
	game->player.dir_x = game->player.dir_x * cos(angle) - game->player.dir_y
		* sin(angle);
	game->player.dir_y = old_dirx * sin(angle) + game->player.dir_y
		* cos(angle);
	game->camera.plane_x = game->camera.plane_x * cos(angle)
		- game->camera.plane_y * sin(angle);
	game->camera.plane_y = old_planex * sin(angle) + game->camera.plane_y
		* cos(angle);
}

int	get_line_length(char *line)
{
	int	len;

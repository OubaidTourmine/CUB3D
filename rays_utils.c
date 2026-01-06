/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:43:29 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/10 16:46:16 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_ray_dir_and_map(t_game *game, t_ray *ray, int x)
{
	double	camera_x;

	camera_x = 2 * x / (double)WIDTH - 1;
	ray->raydir_x = game->player.dir_x + game->camera.plane_x * camera_x;
	ray->raydir_y = game->player.dir_y + game->camera.plane_y * camera_x;
	ray->map_x = game->player.px / TILE_SIZE;
	ray->map_y = game->player.py / TILE_SIZE;
}

void	init_delta_dist(t_ray *ray)

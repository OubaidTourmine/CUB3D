/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:21:00 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/17 11:42:22 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_step_y(t_game *game, t_ray *ray)
{
	if (ray->raydir_y < 0)
	{
		ray->step_y = -1;
		ray->side_dist_y = (game->player.py / TILE_SIZE - ray->map_y)
			* ray->delta_dist_y;

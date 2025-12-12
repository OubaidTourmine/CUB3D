/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:51:22 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/10 17:03:59 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	set_player_position(t_game *game, t_cub_info *info)
{
	game->player.px = (info->player->x + 0.5f) * TILE_SIZE;
	game->player.py = (info->player->y + 0.5f) * TILE_SIZE;
}

static void	set_player_direction_and_plane(t_game *game, t_cub_info *info,
		double plane_len)
{
	if (info->player->f == 'N')
		set_dir_plane_n(game, plane_len);
	else if (info->player->f == 'S')
		set_dir_plane_s(game, plane_len);

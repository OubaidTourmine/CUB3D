/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 08:58:21 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/17 13:47:32 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_text(t_game *game, int i)
{
	game->textures[i].img = NULL;
	game->textures[i].addr = NULL;
	game->textures[i].bpp = 0;
	game->textures[i].line_len = 0;
	game->textures[i].endian = 0;
	game->textures[i].width = 0;
	game->textures[i].height = 0;
}

void	init_game(t_game *game)
{
	int	i;

	i = 0;
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, WIDTH, HEIGHT, "CUB3D");
	game->frame.img = mlx_new_image(game->mlx, WIDTH, HEIGHT);
	game->frame.addr = mlx_get_data_addr(game->frame.img, &game->frame.bpp,
			&game->frame.line_len, &game->frame.endian);
	while (i < 4)
	{
		init_text(game, i);
		i++;
	}
	game->arena = NULL;
	game->arena_size = 0;
	game->player.speed = 0.3;
	game->keys.w = 0;
	game->keys.a = 0;
	game->keys.s = 0;
	game->keys.d = 0;
	game->keys.left = 0;
	game->keys.right = 0;
}

int	load_map_from_file(const char *path, t_cub_info *info)
{
	int		fd;
	int		line_count;
	int		i;
	char	*line;


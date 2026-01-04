/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:35:20 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/09 18:07:27 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	get_direction(t_game *game, int keysym, double *dx, double *dy)
{
	if (keysym == XK_W_LOW || keysym == XK_W_UPPER)
	{
		*dx = game->player.dir_x;
		*dy = game->player.dir_y;
	}
	else if (keysym == XK_S_LOW || keysym == XK_S_UPPER)
	{
		*dx = -game->player.dir_x;
		*dy = -game->player.dir_y;
	}
	else if (keysym == XK_A_LOW || keysym == XK_A_UPPER)
	{
		*dx = -game->camera.plane_x;
		*dy = -game->camera.plane_y;
	}
	else if (keysym == XK_D_LOW || keysym == XK_D_UPPER)
	{
		*dx = game->camera.plane_x;
		*dy = game->camera.plane_y;
	}
}

void	normalize_vector(double *dx, double *dy)
{
	double	mag;

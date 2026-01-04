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

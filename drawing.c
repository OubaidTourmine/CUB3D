/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:00:32 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/17 11:43:52 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_floor_ceiling_wall(t_draw_params *p, t_img *texture, t_ray *ray)
{
	p->line_height = (int)(HEIGHT / ray->perp_wall_dist);
	p->draw_start = -p->line_height / 2 + HEIGHT / 2;
	p->draw_end = p->line_height / 2 + HEIGHT / 2;
	if (p->draw_start < 0)
		p->draw_start = 0;
	if (p->draw_end >= HEIGHT)
		p->draw_end = HEIGHT - 1;
	p->tex_x = (int)(ray->wall_x * (double)texture->width);
	if ((ray->side == 0 && ray->raydir_x > 0) || (ray->side == 1
			&& ray->raydir_y < 0))
		p->tex_x = texture->width - p->tex_x - 1;
	p->step = (double)texture->height / p->line_height;
	p->tex_pos = (p->draw_start - HEIGHT / 2 + p->line_height / 2) * p->step;
}

void	draw_ceiling(t_game *game, int x, int draw_start)
{
	int	y;

	y = 0;
	while (y < draw_start)
	{
		put_pixel_to_frame(game, x, y,
			hex_to_int(game->info->ceiling_color));
		++y;
	}
}

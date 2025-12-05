/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:07:10 by yel-qori          #+#    #+#             */
/*   Updated: 2025/12/17 11:50:06 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "get_next_line/get_next_line.h"
# include "mlx.h"
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef XK_ESCAPE
#  define XK_ESCAPE 0xff1b
#  define XK_W_LOW 0x0077
#  define XK_W_UPPER 0x0057
#  define XK_A_LOW 0x0061
#  define XK_A_UPPER 0x0041
#  define XK_S_LOW 0x0073
#  define XK_S_UPPER 0x0053
#  define XK_D_LOW 0x0064
#  define XK_D_UPPER 0x0044
#  define XK_LEFT 0xff51
#  define XK_RIGHT 0xff53
# endif

# define HEIGHT 600
# define WIDTH 800
# define FOV 60

# ifndef TILE_SIZE
#  define TILE_SIZE 32
# endif

typedef struct s_player
{
	float				px;
	float				py;
	int					position;
	double				dir_x;
	double				dir_y;
	float				speed;
}						t_player;

typedef struct s_camera
{
	float				plane_x;
	float				plane_y;
	double				raydir_x[WIDTH];
	double				raydir_y[WIDTH];
}						t_camera;

typedef struct s_keys
{
	int					w;
	int					a;
	int					s;
	int					d;
	int					left;
	int					right;
}						t_keys;

typedef struct s_map
{
	int					x;
	int					y;
	int					row;
	int					col;
}						t_map;

typedef struct s_img
{
	void				*img;
	char				*addr;
	int					bpp;
	int					line_len;
	int					endian;
	int					width;
	int					height;
}						t_img;

typedef struct s_game
{
	void				*mlx;
	void				*win;
	void				*image;
	t_img				frame;
	t_img				textures[4];
	t_player			player;
	char				**arena;
	int					arena_size;
	t_camera			camera;
	t_keys				keys;
	struct t_cub_info	*info;
}						t_game;

typedef struct s_ray
{
	double				raydir_x;
	double				raydir_y;
	int					map_x;
	int					map_y;
	double				side_dist_x;
	double				side_dist_y;
	double				delta_dist_x;
	double				delta_dist_y;
	double				perp_wall_dist;
	int					step_x;
	int					step_y;
	int					hit;
	int					side;
	double				wall_x;
}						t_ray;


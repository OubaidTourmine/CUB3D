NAME = cub3d
CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = ./libmlx_Linux.a -lX11 -lXext -lm
SRC = main.c\
	draw.c\
	get_next_line/get_next_line_utils.c\
	get_next_line/get_next_line.c\
	keys_handler.c\
	movements.c\
	raycasting.c\
	map_parsing1.c\
	map_parsing2.c\
	map_validation1.c\
	map_validation2.c\
	map_info1.c\
	map_info2.c\
	utils1.c\
	utils2.c\
	utils3.c\
	utils4.c\
	ft_strtrim.c\
	ft_itoa.c\
	init_rays.c\

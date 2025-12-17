/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:44:01 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/15 21:27:39 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	*rgb_to_hex(char *r, char *g, char *b)
{
	char	*color;
	int		value_r;
	int		value_g;
	int		value_b;

	value_r = ft_atoi(r);
	value_g = ft_atoi(g);
	value_b = ft_atoi(b);
	if ((value_r < 0 || value_r > 255) || (value_g < 0 || value_g > 255)
		|| (value_b < 0 || value_b > 255))
		exit(printf("invalid color"));
	color = malloc(9);
	if (!color)
		return (NULL);
	color[0] = '0';
	color[1] = 'x';
	color[2] = "0123456789ABCDEF"[value_r / 16];
	color[3] = "0123456789ABCDEF"[value_r % 16];
	color[4] = "0123456789ABCDEF"[value_g / 16];
	color[5] = "0123456789ABCDEF"[value_g % 16];
	color[6] = "0123456789ABCDEF"[value_b / 16];
	color[7] = "0123456789ABCDEF"[value_b % 16];
	color[8] = '\0';
	return (color);
}

void	free_color_exit(t_parse_color p)
{
	free(p.color[0]);
	free(p.color[1]);
	free(p.color[2]);
	free(p.color);
	exit(printf("error\n"));
}

void	parse_color_loop(char *str, t_parse_color *p)
{
	while (str[p->i] && p->comp < 3)
	{
		if (str[p->i] >= '0' && str[p->i] <= '9')
		{
			if (p->j < 5)
				p->color[p->comp][p->j++] = str[p->i];
			else
				free_color_exit(*p);
		}
		else if (str[p->i] == ',')
		{

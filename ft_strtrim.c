/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:23:56 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/10 17:14:47 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_start(char *s, char *set)
{
	int	strt;
	int	y;

	strt = 0;
	while (s[strt])
	{
		y = 0;
		while (set[y])
		{
			if (s[strt] == set[y])
				break ;
			y++;

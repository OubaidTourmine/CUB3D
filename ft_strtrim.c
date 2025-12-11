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
		}
		if (set[y] == '\0')
			break ;
		strt++;
	}
	return (strt);
}

int	ft_end(char *s, char *set)
{
	int	end;
	int	y;

	end = ft_strlen(s) - 1;
	while (end >= 0)
	{
		y = 0;
		while (set[y])
		{
			if (s[end] == set[y])
				break ;
			y++;
		}
		if (set[y] == '\0')
			break ;
		end--;
	}
	return (end);
}

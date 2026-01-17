/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:17:23 by outourmi          #+#    #+#             */
/*   Updated: 2025/12/15 20:58:14 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	hex_to_int(char *hex)
{
	unsigned int	result;
	int				i;
	char			c;

	result = 0;
	i = 0;
	if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'))
		i = 2;
	while (hex[i] != '\0')
	{
		c = hex[i];
		result = result << 4;
		if (c >= '0' && c <= '9')
			result = result + (c - '0');
		if (c >= 'a' && c <= 'f')
			result = result + (c - 'a' + 10);
		if (c >= 'A' && c <= 'F')
			result = result + (c - 'A' + 10);
		i++;

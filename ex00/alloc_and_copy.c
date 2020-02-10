/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_and_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:33:40 by lflorrie          #+#    #+#             */
/*   Updated: 2020/02/09 20:13:39 by mkristie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		**alloc_and_copy(char **map, int offset)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	result = (char**)malloc(sizeof(char*) * 9);
	while (i < 9)
	{
		result[i] = (char*)malloc(sizeof(char*) * 9);
		++i;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			result[i][j] = map[i + offset][j];
			++j;
		}
		++i;
	}
	return (result);
}

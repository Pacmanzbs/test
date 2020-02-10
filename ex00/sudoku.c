/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:00:24 by lflorrie          #+#    #+#             */
/*   Updated: 2020/02/09 20:40:15 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern char **g_result;

void	print_map(char **map);

int		is_right_place(char **map, int row, int col, int num);

char	**alloc_and_copy(char **map, int offset);

int		sudoku(char **map, int i, int j);

int		insert_num(char **map, int i, int j)
{
	int num;

	num = 1;
	while (num <= 9)
	{
		if (g_result)
			return (0);
		if (is_right_place(map, i, j, num))
		{
			map[i][j] = num + '0';
			if (i == 8 && j == 8)
			{
				g_result = alloc_and_copy(map, 0);
				return (0);
			}
			if (j == 8 && i != 8)
				sudoku(map, i + 1, 0);
			else if (j != 8)
				sudoku(map, i, j + 1);
			map[i][j] = '.';
		}
		++num;
	}
	return (0);
}

int		sudoku(char **map, int i, int j)
{
	while (i < 9)
	{
		while (j < 9)
		{
			if (map[i][j] == '.')
			{
				if (insert_num(map, i, j) == 0)
					return (0);
			}
			if (i == 8 && j == 8)
			{
				g_result = alloc_and_copy(map, 0);
				return (0);
			}
			++j;
		}
		j = 0;
		++i;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:26:21 by lflorrie          #+#    #+#             */
/*   Updated: 2020/02/09 20:40:03 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**g_result;

int		sudoku(char **map, int i, int j);

char	**alloc_and_copy(char **map, int offset);

void	print_map(char **map);

int		is_valid_sudoku(char **map);

int		is_valid_input(int argc, char **argv);

void	free_mem(char **map)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(map[i++]);
	}
	free(map);
}

int		main(int argc, char **argv)
{
	char	**map;

	g_result = 0;
	if (!is_valid_input(argc, argv))
	{
		write(1, "Error\n", 7);
		return (0);
	}
	map = alloc_and_copy(argv, 1);
	if (!is_valid_sudoku(map))
	{
		write(1, "Error\n", 7);
		return (0);
	}
	sudoku(map, 0, 0);
	if (!g_result)
		write(1, "Error\n", 7);
	else
	{
		print_map(g_result);
		free_mem(g_result);
	}
	free_mem(map);
	return (0);
}

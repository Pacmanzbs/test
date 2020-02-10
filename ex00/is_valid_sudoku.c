/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 19:04:30 by lflorrie          #+#    #+#             */
/*   Updated: 2020/02/09 20:15:41 by mkristie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_right_place(char **map, int row, int col, int num);

int		is_valid_sudoku(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (map[i][j] != '.' && !is_right_place(map, i, j, map[i][j] - '0'))
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

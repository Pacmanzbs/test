/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_right_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:29:35 by lflorrie          #+#    #+#             */
/*   Updated: 2020/02/09 20:19:42 by mkristie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_square(char **map, int row, int col, int num)
{
	int x_offset;
	int y_offset;
	int i;
	int j;

	x_offset = col / 3 * 3;
	y_offset = row / 3 * 3;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (map[i + y_offset][j + x_offset] == num + '0' &&
					i + y_offset != row && j + x_offset != col)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int		check_v_line(char **map, int row, int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (map[i][col] == num + '0' && i != row)
			return (0);
		++i;
	}
	return (1);
}

int		check_h_line(char **map, int row, int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (map[row][i] == num + '0' && i != col)
			return (0);
		++i;
	}
	return (1);
}

int		is_right_place(char **map, int row, int col, int num)
{
	return (check_h_line(map, row, col, num) * check_v_line(map, row, col, num)
			* check_square(map, row, col, num));
}

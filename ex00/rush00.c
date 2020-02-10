/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:54:00 by hemelia           #+#    #+#             */
/*   Updated: 2020/02/04 18:11:23 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		write_lines(int x, char edge, char middle)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(edge);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
}

void		rush(int x, int y)
{
	int j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			if (j == 1 || j == y)
			{
				write_lines(x, 'o', '-');
			}
			else
			{
				write_lines(x, '|', ' ');
			}
			j++;
			ft_putchar('\n');
		}
	}
}

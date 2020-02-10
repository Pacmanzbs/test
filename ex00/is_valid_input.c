/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:39:45 by lflorrie          #+#    #+#             */
/*   Updated: 2020/02/09 19:03:48 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		is_valid_input(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 10)
	{
		while (i < argc)
		{
			if (ft_strlen(argv[i]) != 9)
			{
				return (0);
			}
			++i;
		}
		return (1);
	}
	return (0);
}

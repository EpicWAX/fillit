/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 18:14:31 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/28 18:20:29 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#define S_VAR_INIT i.i = -1; i.nb_tetriminos = 0; i.nb_dieze = 0; i.nb_dot = 0;

int				ft_pre_test(char *map)
{
	int i;
	int j;
	int size;
	
	i = 0;
	j = i + (5 * 4);
	size = ft_strlen(map);
	while (i != size)
	{
		if (i == size - 4 && map[size] == '\0')
			return (1);
		if (map[i + 4] != '\n')
			return (0);
		i += 4;
		if (i == j)
		{
			ft_putendl("WSH");
			if (map[i + 1] != '\n')
				return (0);
			i += j + 1;
		}
	}
	return (1);
}

static int		ft_test_tetristack(char *map, int i)
{
	if (map[i - 1] != '#' && map[i + 1] != '#'
			&& map[i - 5] != '#' && map[i + 5] != '#')
		return (0);
	if ((map[i - 1] == '#' && map[i - 5] == '#') || 
			(map[i - 1] == '#' && map[i + 1] == '#') ||
			(map[i - 1] == '#' && map[i + 5] == '#') ||
			(map[i - 5] == '#' && map[i + 1] == '#') ||
			(map[i - 5] == '#' && map[i + 5] == '#') ||
			(map[i + 1] == '#' && map[i + 5] == '#'))
		return (2);
	return (1);
}
/*
i = 0;
num = 0;
while (i < 20)
{
	num += (1 << i) * (tet[i] == '#');
	i += 1 + (i % 4);
}
...#
...#
..##
....

0001 
0001 
0011 
0000

0011
0011
0000
0000

0001
0001
0000
0000
*/

int				ft_check_tetriminos(char *map, int *nb_tetriminos)
{
	t_check_t	i;
	int		nb_x2;

	nb_x2 = 0;
	S_VAR_INIT;
	while (map && map[++i.i])
	{
		if (map[i.i] != '.' && map[i.i] != '#' && map[i.i] != '\n')
			return (0);
		if (map[i.i] == '.')
			i.nb_dot++;
		if (map[i.i] == '#')
		{
			if (ft_test_tetristack(map, i.i) == 2)
				nb_x2++;
			if (ft_test_tetristack(map, i.i) == 0)
				return (0);
			i.nb_dieze++;
		}
		if (i.nb_dieze > 12 || i.nb_dieze > 4)
			return (0);
		if (map[i.i] == '\n' && (map[i.i + 1] == '\n' || map[i.i + 1] == '\0'))
		{
			if (i.nb_dot != 12 || i.nb_dieze != 4 || map[i.i - 1] == '\n' || 
				i.nb_tetriminos > 26 || nb_x2 < 2)
				return (0);
			i.nb_dieze = 0;
			i.nb_dot = 0;
			i.nb_tetriminos++;
			nb_x2 = 0;
		}
	}
	if ((i.nb_tetriminos) < 1)
		return (0);
		printf("nb_tetriminos = %i\n", i.nb_tetriminos);
	*nb_tetriminos = i.nb_tetriminos;
	return (1);
}
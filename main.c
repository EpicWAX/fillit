/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 15:54:06 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/25 12:04:29 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sizeof_file(char *av)
{
	int		size;
	int		fd;
	char	buf;

	size = 0;
	fd = open(av, O_RDONLY);
	while (read(fd, &buf, 1))
		size++;
	return (size);
}

char    *ft_recup_map(int fd, char *av)
{
	char	*map;
	int		file_len;
	
	file_len = ft_sizeof_file(av);
	map = ft_strnew(file_len);
	while (read(fd, map, file_len))
		;
	return (map);
}

static void		ft_error(void)
{
	ft_putendl("error");
	exit(1);
}

int				main(int ac, char **av)
{
	int		fd;
	char	*map;
	
	if (ac != 2)
		ft_error();
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_error();
	map = ft_recup_map(fd, av[1]);
	ft_putnbrendl(ft_check_tetriminos(map));
//	ft_putendl(map);
	return (0);
}

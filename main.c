/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 15:54:06 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/28 18:14:13 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_sizeof_file(char *av)
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

char			*ft_recup_input(int fd, char *av)
{
	char	*input;
	int		file_len;

	file_len = ft_sizeof_file(av);
	input = ft_strnew(file_len);
	while (read(fd, input, file_len))
		;
	return (input);
}

static void		ft_error(void)
{
	ft_putendl("error");
	exit(1);
}

int				main(int ac, char **av)
{

	int		fd;
	char	*input;
	//char	*map;

	//map = "#\0";
	if (ac != 2)
		ft_error();
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_error();
	input = ft_recup_input(fd, av[1]);
	if (ft_check_tetriminos(input) == 0)
		ft_error();
	ft_putnbrendl(ft_pre_test(input));
	return (0);
}
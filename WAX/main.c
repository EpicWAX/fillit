/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 15:54:06 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/25 15:00:00 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_error(void)
{
	ft_putendl("error");
	exit(1);
}

int		sizeof_file(int i, char **av)
{
	int		fd;
	int		size;
	char	buf;

	size = 0;
	fd = open(av[i], O_RDONLY);
	while (read(fd, &buf, 1))
		size++;
	close(fd);
	return (size);
}

char    **tab_maker(int iter, char **av)
{
	t_box   a;

	a.fd = open(av[iter], O_RDONLY);
	if (a.fd < 0)
		ft_error();
	a.file_len = sizeof_file(iter, av);
	a.buf = ft_strnew(a.file_len);
	while (read(a.fd, a.buf, a.file_len))
		;
	a.tab = ft_strsplit(a.buf, '\n');
	free(a.buf);
	close(a.fd);
	return (a.tab);
}

int				main(int ac, char **av)
{
	char **tab;
	int i;

	if (ac != 2)
		ft_error();
	tab = tab_maker(1, av);
	i = -1;
	while (tab && tab[++i])
		ft_putendl(tab[i]);
	return (0);
}

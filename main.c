/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 15:54:06 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/25 10:08:51 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		size_files(int i, char **av)
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

static void		ft_error(void)
{
	ft_putendl("error");
	exit(1);
}

int				main(int ac, char **av)
{
	if (ac != 2)
		ft_error();
	else
		ft_putendl(av[1]);
	return (0);
}

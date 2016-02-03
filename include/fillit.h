/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillih.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 10:19:35 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/28 18:18:21 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_check_t
{
	int				i;
	int				nb_tetriminos;
	int				nb_dieze;
	int				nb_dot;
}					t_check_t;

typedef	struct		s_tetris
{
	int				i;
	int				pos1;
	int				pos2;
	int				pos3;
	int				pos4;
	char			piece[21];
}					t_tetris;

int				ft_pre_test(char *map);
int					ft_check_tetriminos(char *map);
int					*ft_place_tetriminos(char *map);

#endif

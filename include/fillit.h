/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
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

typedef struct 	s_tetris
{
	int 		position;
	int 		size_x;
	int 		size_y;
	char		*piece;
}				t_tetris;

t_tetris		*p;
int				ft_pre_test(char *map);
int				ft_check_tetriminos(char *map, int *nb_tetriminos);
char			*ft_solve(char *map);
int				*ft_place_tetriminos(char *map);
int     		ft_put_size_x1(int ps[5]);
int     		ft_put_size_y1(int ps[5]);
char    		*ft_put_piece1(int ps[5]);
void			ft_init_tetris(int nb_tetriminos, char *input);

#endif

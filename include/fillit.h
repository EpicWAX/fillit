/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillih.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 10:19:35 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/24 15:56:27 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <stdio.h>

int     ft_check_tetriminos(char *map);
char    **ft_place_tetriminos(char *map);

#endif

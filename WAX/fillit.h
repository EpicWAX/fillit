/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillih.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 10:19:35 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/25 14:31:39 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>

typedef struct		s_box
{
	int				iter;
	int				fd;
	int				file_len;
	char            *buf;
	char            **tab;
}					t_box;

#endif

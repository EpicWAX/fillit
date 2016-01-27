/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 04:07:01 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/18 11:53:27 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_s;

	if (!s1 || !s2 || !(new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	new_s = ft_strdup(s1);
	new_s = ft_strcat(new_s, s2);
	new_s[ft_strlen(new_s)] = '\0';
	return (new_s);
}

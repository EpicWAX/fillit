/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:25:22 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/18 00:43:04 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_end(char *s, int i)
{
	while (s && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (s[i] == '\0')
		return (1);
	return (0);
}

void			ft_epur_str(char *s)
{
	int i;

	i = 0;
	if (s[0] == '\0')
		return (ft_putchar('\n'));
	while (s && s[i])
	{
		while (ft_iswhsep(s[i]) != 0)
			i++;
		while (s[i] > 32 && s[i] < 127)
		{
			ft_putchar(s[i]);
			i++;
		}
		if (check_end(s, i) == 1)
			return (ft_putchar('\n'));
		else
			ft_putchar(' ');
	}
}

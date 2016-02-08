#include "fillit.h"

char	*ft_new_map(int	size_map)
{
	int		i;
	int		x;
	char	*map;
	
	x = 1;
	i = 0;
	map = NULL;
	if (!(map = malloc(sizeof(char) * size_map * size_map)))
		return (NULL);
	while (x < size_map)
	{
		while (i < (size_map * x))
		{
			map[i] = '.';
			i++;
		}
		map[i] = '\n';
		i++;
		x++;
	}
	map[i] = '\0';
	return (map);
}

void	ft_replace_pieces(char **map, int size_map, int y, int i)
{
	int	z;
	int nb_retour;
	int	pos_x;
	
	nb_retour = 0;
	z = 0;
	while (y > 0)
	{
		while (p[y].piece[z] != '\0')
		{
			if (p[y].piece[z] == '#')
				*map[i + pos_x + (size_map * nb_retour)] = '#';
			pos_x++;
			if (p[y].piece[z] == '\n')
			{
				pos_x = 0;
				nb_retour++;
			}
			z++;
		}
		y--;
		z = 0;
		nb_retour = 0;
	}
}

int		ft_check_place(char *map, char *piece, int i, int size_map)
{
	int	z;
	int nb_retour;
	int	pos_x;
	
	nb_retour = 0;
	z = 0;
	pos_x = 0;
	printf("piece = \n%s\n", piece);
	while (piece[z] != '\0')
	{
		printf("piece[%i] = %c map[%i] = %c\n", z, piece[z], (i + pos_x + (size_map * nb_retour)), map[(i + pos_x + (size_map * nb_retour))]);
		if (piece[z] == '#' && map[i + pos_x + (size_map * nb_retour)] != '.')
			return (0);
		pos_x++;
		if (piece[z] == '\n')
		{
			pos_x = 0;
			nb_retour++;
		}
		z++;
	}
	return (1);
}

void	ft_place_piece(char *map, char *piece, int i, int size_map)
{
	int	z;
	int nb_retour;
	int	pos_x;
	
	nb_retour = 0;
	z = 0;
	pos_x = 0;
	printf("piece = \n%s\n", piece);
	while (piece[z] != '\0')
	{
		printf("piece[%i] = %c map[%i] = %c\n", z, piece[z], (i + pos_x + (size_map * nb_retour)), map[(i + pos_x + (size_map * nb_retour))]);
		if (piece[z] == '#' && map[i + pos_x + (size_map * nb_retour)] == '.')
			map[i + pos_x + (size_map * nb_retour)] = '#';
		pos_x++;
		if (piece[z] == '\n')
		{
			pos_x = 0;
			nb_retour++;
		}
		z++;
	}
}

char	*ft_solve(char *map)
{
	int		i;
	int		y;
	int		size_map;
	
	size_map = 3;
	y = 0;
	i = 0;
	while(p[y].piece)
	{
		if (map[i] == '\n' || map[i] == '#')
			i++;
		printf("i = %i map[i] = %c\n", i, map[i]);
		if (map[i] == '.')
		{
			printf("enter in check_place ----------\n");
			if ((ft_check_place(map, p[y].piece, i, size_map)) == 1)
			{
				printf("check_place OK ---------------\n");
				printf("enter in place_piece ----------\n");
				ft_place_piece(map, p[y].piece, i, size_map);
				printf("place_piece OK ---------\n");
				p[y].position = i;
				i = 0;
				y++;
			}
			else
				i++;
		}
		if (map[i] == '\0')
		{
			size_map++;
			if (!(map = ft_new_map(size_map)))
				return (NULL);
			p[y].position = -1;
			y--;
			ft_replace_pieces(&map, size_map, y, i);
			i = 0;
		}
	}
	return (map);
}
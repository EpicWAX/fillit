#include "fillit.h"

int     ft_check_tetriminos(char *map)
{
    int i;
    int nb_tetriminos;
    int nb_dieze;
    int nb_point;
    
    i = 0;
    nb_tetriminos = -1;
    nb_dieze = 0;
    nb_point = 0;
    while (map && map[i])
    {
        //printf("map[i] = %c \n", map[i]);
        if (map[i] != '.' && map[i] != '#' && map[i] != '\n')
            return (0);
        if (map[i] == '.')
            nb_point++;
        if (map[i] == '#')
        {
            if (map[i - 1] != '#' && map[i + 1] != '#' && map[i - 5] != '#' &&
            map[i + 5] != '#')
                return (0);
            nb_dieze++;
        }
        if (nb_dieze > 12 || nb_dieze > 4)
            return (0);
        if (map[i] == '\n' && (map[i + 1] == '\n' || map[i + 1] == '\0'))
        {
            if (nb_point != 12 || nb_dieze != 4 || map[i - 1] == '\n')
                return (0);
            nb_dieze = 0;
            nb_point = 0;
            if (nb_tetriminos > 26)
                return (0);
            nb_tetriminos++;
        }
        i++;
    }
    return (1);
}
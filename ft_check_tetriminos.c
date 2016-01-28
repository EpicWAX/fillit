#include "fillit.h"
#define S_VAR_INIT i.i = -1; i.nb_tetriminos = -1; i.nb_dieze = 0; i.nb_dot = 0

static int      ft_test_tetristack(char *map, int i)
{
    if (map[i - 1] != '#' && map[i + 1] != '#'
        && map[i - 5] != '#' && map[i + 5] != '#')
        return (0);
    return (1);
}

int     ft_check_tetriminos(char *map)
{
    t_check_t   i;
    
    S_VAR_INIT;
    while (map && map[++i.i])
    {
        if (map[i.i] != '.' && map[i.i] != '#' && map[i.i] != '\n')
            return (0);
        if (map[i.i] == '.')
            i.nb_dot++;
        if (map[i.i] == '#' && ft_test_tetristack(map, i.i) == 1)
            i.nb_dieze++;
        if (i.nb_dieze > 12 || i.nb_dieze > 4)
            return (0);
        if (map[i.i] == '\n' && (map[i.i + 1] == '\n' || map[i.i + 1] == '\0'))
        {
            if (i.nb_dot != 12 || i.nb_dieze != 4 || map[i.i - 1] == '\n')
                return (0);
            i.nb_dieze = 0;
            i.nb_dot = 0;
            if (i.nb_tetriminos > 26)
                return (0);
            i.nb_tetriminos++;
        }
    }
    return (1);
}
int     ft_put_right_tetrimino2(int ps[4], char *map)
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return (11);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (12);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (13);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        reutnr (14);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (15);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 3) && ps[3] == ps[2] + 1)
        return (16);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return (17);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (18);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (19);
}

int     ft_put_right_tetrimino1(int ps[4], char *map)
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 5)
        return (1);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 3) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)//bug? ps[0] + 3? pas censer etre '\n' ou tetri non valide? ? 
        return (4);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (5);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 3)
        return (6);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)// bug maybe ps[1] + 4 ? '\n'
        return (7);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return (8);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return (9);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (10);
    return (ft_put_right_tetrimino2(ps, map));
}

int     ft_count_tetriminos(char *map)
{
    int i;
    int nb_tetriminos;
    
    nb_tetriminos = 0;
    i = 0;
    while (map && map[i])
    {
        if (map[i] == '\n' && map[i + 1] == '\n')
            nb_tetriminos++;
        i++;
    }
    return (nb_tetriminos);
}

int         *ft_place_tetriminos(char *map)
{
    int *tetriminos;
    int ps[4];
    int y;
    
    y = 0;
    tetriminos = (int*)malloc(sizeof(int) * ft_count_tetriminos(map) + 1);
    tetriminos[ft_count_tetriminos(map)] = 0;
    while (map && map[i])
    {
        if (map[i] == '\n' && map[i + 1] == '\n')
        {
            tetriminos[y] = ft_put_right_tetrimino1(ps, map);
            ps[0] = -1;
            ps[1] = 0;
            ps[2] = 0;
            ps[3] = 0;
            i += 2;
            y++;
        }
        if (map[i] == '.' || map[i] == '\n')
            i++;
        if (map[i] == '#')
        {
            if (ps[0] == -1)
                ps[0] = i;
            else if (ps[0] != -1)
                ps[1] = i;
            else if (ps[1] != 0)
                ps[2] = i;
            else if (ps[2] != 0)
                ps[3] = i;
            i++
        }
    }
    return (tetriminos);
}
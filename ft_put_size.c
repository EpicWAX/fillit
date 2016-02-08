int     ft_put_size_y2(int ps[5])
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (2);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (3);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (3);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 3) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (3);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (3);
    return (0);
}

int     ft_put_size_y1(int ps[5])
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 5)
        return (3);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return (3);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 3) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 3)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return (4);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (1);
    return (ft_put_size_y2(ps));
}

int     ft_put_size_x2(int ps[5])
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (3);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (2);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 3) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (2);
    return (0);
}

int     ft_put_size_x1(int ps[5])
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 5)
        return (2);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 3) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (3);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (3);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 3)
        return (3);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return (2);
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return (1);
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (4);
    return (ft_put_size_x2(ps));
}
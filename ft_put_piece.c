#include "fillit.h"

char    *ft_put_piece2(int ps[5])
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return ("##\n##\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return ("###\n.#.\0");
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return (".#.\n###\0");
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return ("#.\n##\n#.\0");
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return (".#\n##\n.#\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 3) && ps[3] == ps[2] + 1)
        return (".##\n##.\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return ("##.\n.##\0");
    if (ps[1] == (ps[0] + 4) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 4)
        return (".#\n##\n#.\0");
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return ("#.\n##\n.#\0");
    return (NULL);
}

char    *ft_put_piece1(int ps[5])
{
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 5)
        return ("##\n#.\n#.\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return ("##\n.#\n.#\0");
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return ("#..\n###\0");
    if (ps[1] == (ps[0] + 3) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return ("..#\n###\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 5)
        return ("###\n..#\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 3)
        return ("###\n#..\0");
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 4) && ps[3] == ps[2] + 1)
        return (".#\n.#\n##\0");
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 1)
        return ("#.\n#.\n##\0");
    if (ps[1] == (ps[0] + 5) && ps[2] == (ps[1] + 5) && ps[3] == ps[2] + 5)
        return ("#\n#\n#\n#\0");
    if (ps[1] == (ps[0] + 1) && ps[2] == (ps[1] + 1) && ps[3] == ps[2] + 1)
        return ("####\0");
    return (ft_put_piece2(ps));
}
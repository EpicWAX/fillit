#include "fillit.h"
#define INIT_POS_0 pos[0] = -1; pos[1] = -1; pos[2] = -1; pos[3] = -1;

void        ft_init_piece(char *input)
{
    int pos[5];
    int i;

    i = 0;
    INIT_POS_0;
    pos[4] = 0;
    while (input[i])
    {
        printf("i = %i map[i] = %c\n", i, input[i]);
        if (input[i] == '\n' && input[i + 1] == '\n')
        {
            INIT_POS_0;
            i += 2;
        }
        if (input[i] == '#')
        {
            if (pos[2] != -1)
                pos[3] = i;
            else if (pos[1] != -1)
                pos[2] = i;
            else if (pos[0] != -1)
                pos[1] = i;
            else if (pos[0] == -1)
                pos[0] = i;
            printf("pos[0] = %i pos[1] = %i pos[2] = %i pos[3] = %i\n", pos[0], pos[1], pos[2], pos[3]);
            if (pos[3] != -1)
            {
                printf("pos[4] = %i\n", pos[4]);
                p[pos[4]].piece = ft_put_piece1(pos);
                p[pos[4]].size_x = ft_put_size_x1(pos);
                p[pos[4]].size_y = ft_put_size_y1(pos);
                p[pos[4]].position = -1;
                pos[4]++;
            }
        }
        i++;
    }
}

void        ft_init_tetris(int nb_tetriminos, char *input)
{
    int i;
    
    i = 0;
    p = (t_tetris*)malloc(sizeof(t_tetris) * nb_tetriminos + 1);
    ft_init_piece(input);
    p[nb_tetriminos].piece = NULL;
    while (p[i].piece)
    {
        printf("p[%i].size_x = %i\n", i, p->size_x);
        printf("p[%i].size_y = %i\n", i, p->size_y);
        printf("p[%i].pos = %i\n", i, p->position);
        printf("p[%i].piece = %s\n", i, p->piece);
        i++;
    }
}
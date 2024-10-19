#ifndef T_CELL_H
#define T_CELL_H


typedef struct s_cell
{
    int value;
    struct s_cell *next;
}t_cell;

t_cell *CreateCell(int val);

#endif
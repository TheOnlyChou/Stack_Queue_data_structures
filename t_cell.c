#include <stdio.h>
#include <stdlib.h>
#include "t_cell.h"

t_cell *CreateCell(int val)
{
    t_cell *cell = (t_cell *)malloc(sizeof(t_cell));

    cell->value = val;
    cell->next = NULL;

    return cell;
}
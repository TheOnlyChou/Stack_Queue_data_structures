#include <stdio.h>
#include <stdlib.h>
#include "t_stack_tab.h"

t_stack_tab createEmptyStacktab(int size)
{
    t_stack_tab s;
    s.nbElts = 0;

    if(size < 0)
    {
        s.max_size = 0;
        s.values = NULL;
    }
    else
    {
        s.max_size = size;
        s.values = (int *)malloc(sizeof(size * sizeof(int)));
    }

    return s;
}

int isEmptyStacktab(t_stack_tab s)
{
    return (s.nbElts == 0);
}

int isFullStacktab(t_stack_tab s)
{
    return (s.nbElts == s.max_size);
}

void displayStacktab(t_stack_tab s)
{
    if(isEmptyStacktab(s))
    {
        printf("[ EMPTY ]");
        return;
    }

    printf("[ ");
    for(int i = s.nbElts-1; i>=0; i--)
    {
        printf("%d ",s.values[i]);
    }
    printf("]");
}

void stacktab(t_stack_tab *ps, int val)
{
    int pos = ps->nbElts;

    ps->values[pos] = val;
    ps->nbElts = pos + 1;
}

int unstacktab(t_stack_tab *ps)
{
    int pos, res;
    
    pos = ps->nbElts-1;
    res = ps->values[pos];
    ps->nbElts = pos;

    return res;
}
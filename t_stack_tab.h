#ifndef T_STACK_TAB_H
#define T_STACK_TAB_H

// Création du type t_stack_tab, une pile peut être implémentée à l'aide d'un tableauss
typedef struct s_stack_tab
{
    int *values;
    int max_size;
    int nbElts;
}t_stack_tab;

t_stack_tab createEmptyStacktab(int size);
int isEmptyStacktab(t_stack_tab s);
int isFullStacktab(t_stack_tab s);
void displayStacktab(t_stack_tab s);
void stacktab(t_stack_tab *ps, int val);
int unstacktab(t_stack_tab *ps);

#endif 
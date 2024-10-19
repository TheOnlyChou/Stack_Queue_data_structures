#ifndef T_STACK_LIST_H
#define T_STACK_LIST_H
#include "t_cell.h"
#include "t_std_list.h"

// Création du type t_stack_list, une pile peut être implémentée à l'aide d'une liste simplement chaînée
typedef t_std_list t_stack_list;

t_stack_list createEmptyStacklist();
int isEmptyStacklist(t_stack_list s);
void displayStacklist(t_stack_list s);
void stacklist(t_stack_list *ps, int val);
int unstacklist(t_stack_list *ps);

#endif
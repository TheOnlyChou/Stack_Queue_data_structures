#ifndef T_HT_LIST_H
#define T_HT_LIST_H
#include "t_cell.h"  // Assurez-vous que t_cell.h est inclus

typedef struct s_ht_list {
    t_cell *head;
    t_cell *tail;
} t_ht_list;

#endif
#ifndef T_QUEUE_LIST_H
#define T_QUEUE_LIST_H
#include "t_ht_list.h"

// Création du type t_queue_list, une pile peut être implémentée à l'aide d'une liste head & tail
typedef t_ht_list t_queue_list;

t_queue_list createEmptyQueue();
int isEmptyQueue(t_queue_list ql);
void displayQueue(t_queue_list ql);
void enqueue(t_queue_list *ql, int val);
int dequeue(t_queue_list *ql);

#endif
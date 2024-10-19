#include <stdio.h>
#include <stdlib.h>
#include "t_cell.h"
#include "t_queue_list.h"

t_queue_list createEmptyQueue() {
    t_queue_list q;
    q.head = NULL;
    q.tail = NULL;
    return q;
}

int isEmptyQueue(t_queue_list ql) {
    return ql.head == NULL;
}

void enqueue(t_queue_list *ql, int val) {
    t_cell *nouv = CreateCell(val);
    if (isEmptyQueue(*ql)) {
        ql->head = nouv;
        ql->tail = nouv;
    } else {
        ql->tail->next = nouv;
        ql->tail = nouv;
    }
}

int dequeue(t_queue_list *ql) {
    if (isEmptyQueue(*ql)) {
        return -1; // Indiquer que la file est vide
    }
    t_cell *temp = ql->head;
    int val = temp->value;
    ql->head = ql->head->next;
    if (ql->head == NULL) {
        ql->tail = NULL;
    }
    free(temp);
    return val;
}

void displayQueue(t_queue_list ql) {
    t_cell *cur = ql.head;
    printf("[ ");
    while (cur != NULL) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("]");
}
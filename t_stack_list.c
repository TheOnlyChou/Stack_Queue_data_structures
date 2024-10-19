#include <stdio.h>
#include <stdlib.h>
#include "t_cell.h"
#include "t_std_list.h"
#include "t_stack_list.h"

t_stack_list createEmptyStacklist() {
    t_stack_list s;
    s.head = NULL;
    return s;
}

void stacklist(t_stack_list *ps, int val) {
    t_cell *pn = CreateCell(val);
    pn->next = ps->head;
    ps->head = pn;
}

int unstacklist(t_stack_list *ps) {
    if (ps->head == NULL) {
        return -1; // Indiquer que la pile est vide
    }
    t_cell *temp = ps->head;
    int val = temp->value;
    ps->head = ps->head->next;
    free(temp);
    return val;
}

void displayStacklist(t_stack_list s) {
    t_cell *cur = s.head;
    printf("[ ");
    while (cur != NULL) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("]");
}
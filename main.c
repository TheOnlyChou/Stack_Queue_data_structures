#include <stdio.h>
#include <stdlib.h>
#include "t_cell.h"
#include "t_std_list.h"
#include "t_ht_list.h"
#include "t_stack_tab.h"
#include "t_stack_list.h"
#include "t_queue_list.h"

int main() {
    // Initialiser la pile tableau avec une taille de 10
    t_stack_tab stackTab = createEmptyStacktab(10);

    // Empiler des éléments dans la pile tableau
    stacktab(&stackTab, 10);
    stacktab(&stackTab, 20);
    printf("Dépilé de stackTab: %d\n", unstacktab(&stackTab));

    // Afficher la pile tableau
    displayStacktab(stackTab);
    printf("\n");

    // Initialiser la pile liste
    t_stack_list stackList = createEmptyStacklist();

    // Empiler des éléments dans la pile liste
    stacklist(&stackList, 30);
    stacklist(&stackList, 40);
    printf("Dépilé de stackList: %d\n", unstacklist(&stackList));

    // Afficher la pile liste
    displayStacklist(stackList);
    printf("\n");

    // Initialiser la file d'attente
    t_queue_list queueList = createEmptyQueue();

    // Enfiler des éléments dans la file d'attente
    enqueue(&queueList, 50);
    enqueue(&queueList, 60);
    printf("Défilé de queueList: %d\n", dequeue(&queueList));

    // Afficher la file d'attente
    displayQueue(queueList);
    printf("\n");

    // Libérer la mémoire allouée pour la pile tableau
    free(stackTab.values);

    return 0;
}
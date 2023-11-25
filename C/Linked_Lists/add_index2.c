#include "header.h"
list_caller *add_at_index(list_caller **head, int data, int index)
{   list_caller *current = NULL;
    list_caller *slow_current = NULL;
    int i;
    list_caller *new = (list_caller *)malloc(sizeof(list_caller));
    if (!new) {
        fprintf(stderr, "Malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    current = *head;
    for (i = 0; i < index - 1; i++) {
        slow_current = current;
        current = current->next;/*current should now be at index*/
    }
    if (!current) {
        fprintf(stderr, "Index out of bound");
        exit(EXIT_FAILURE);
    }
    slow_current->next = new;
    new->next = current;
    return(new);    
}
#include "header.h"
list_caller *add_node_end (list_caller **head, int data)
{   
    list_caller *pointer = NULL;
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (!new) {
        fprintf(stderr, "Malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = NULL;
    if (!*head) {
        *head = new;
         new->prev = NULL;
         return (new);
    }
    pointer = *head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->next = new;
    new->prev = pointer;
    free(pointer);
}
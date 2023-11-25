#include "header.h"
list_caller *add_node_index (list_caller **head, int data, int index)
{
    list_caller *pointer = NULL;
    int i = 0;
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (!new) {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    if (!*head || index <= 0) {
        new->next = NULL;
        new->prev = NULL;
        *head = new;
        return (new);
    }
    pointer = *head;
    for (i = 0; i < index - 1; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "index out of bounds");
        return;
    }
    pointer->prev->next = new;
    new->next = pointer;
    new->prev = pointer->prev;
    pointer->prev = new;

    return (new);
}
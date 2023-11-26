#include "header.h"
/*This is a circular doubly linked list*/
list_caller *add_node_end (list_caller **head, int data)
{
    list_caller *pointer = NULL;
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = new;
    if (!*head) {
        new->prev = new;
        *head = new;
        return (new);
    }
    pointer = *head;
    while (pointer->next != *head)
    {
        pointer = pointer->next;
    }
    pointer->next = new;
    new->prev = pointer;
    new->next = *head;
    return (new);
}

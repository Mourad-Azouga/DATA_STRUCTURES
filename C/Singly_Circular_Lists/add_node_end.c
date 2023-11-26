#include "header.h"
/*This is a singly circular linked list*/
list_caller *add_node_end (list_caller **head, int data)
{
    list_caller *pointer = NULL;
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "Malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = new;
    if (!*head) {
        *head = new;
        return(new);
    }
    pointer = *head;
    while (pointer->next != *head) 
    {
        pointer = pointer->next;
    }
    pointer->next = new;
    new->next = *head;
    return (new);
}
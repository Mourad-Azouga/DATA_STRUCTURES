#include "header.h"
list_caller *add_node_top (list_caller **head, int data)
{
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (!new) {
        fpritnf(stderr, "Malloc error");
        exit(EXIT_FAILURE);
    }
    new->prev = NULL;
    new->data = data;
    if (!*head) {
        *head = new;
        new->next = NULL;
        return(new);
    }
    else
    {
    new->next = *head;
    (*head)->prev = new;
    *head = new;
    }
    return (new);
}
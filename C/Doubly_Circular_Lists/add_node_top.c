#include "header.h"
list_caller *add_node_top (list_caller **head, int data)
{
    list_caller *new = (list_caller *)malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->prev = new;
    if (!*head) {
        new->next = new;
        *head = new;
        return (new);
    }
    (*head)->prev->next = new;
    new->next = *head;
    *head = new;
    return (new);
}
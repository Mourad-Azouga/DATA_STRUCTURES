#include "header.h"
/*This is a singly circular linked list*/
list_caller *add_node_top (list_caller **head, int data)
{
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = new;
    if (!*head) {
        *head = new;
        return (new);
    }
    new->next = *head;
    *head = new;
    return (new);
}
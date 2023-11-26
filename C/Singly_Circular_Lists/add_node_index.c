#include "header.h"
/*This is a singly circular list*/
list_caller *add_node_index (list_caller **head, int data, int index)
{
    list_caller *pointer = NULL, *slow_pointer = NULL;
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
    pointer = *head;
    for (int i = 0; i < index -1; i++)
    {
        slow_pointer = pointer;
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "INdex out of bounds");
        return (NULL);
    }
    slow_pointer->next = new;
    new->next = pointer;
    return (new);
}
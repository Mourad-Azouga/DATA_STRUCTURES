#include "header.h"
list_caller *add_node_index (list_caller **head, int data, int index)
{
    list_caller *pointer = NULL;
    list_caller *new = (list_caller *)malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    if (!*head) {
        new->next = new;
        new->prev = new;
        *head = new;
        return (new);
    }
    pointer = *head;
    /*For index starting from 0*/
    for (int i = 0; i < index -1; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "Index out of bounds");
        return (NULL);
    }
    pointer->next = new;
    new->prev = pointer;
    new->next = pointer->next;
    pointer->next->prev = new;
    return (new);
}
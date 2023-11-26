#include "header.h"
/*This is a singly circular list*/
void delete_end (list_caller **head)
{
    list_caller *pointer = NULL, *slow_pointer = NULL;
    if (!*head) {
        fprintf(stderr, "empty list");
        return;
    }
    pointer = *head;
    if (pointer->next == NULL) {
        free(pointer);
        *head = NULL;
        return;
    }
    while (pointer->next != *head)
    {
        slow_pointer = pointer;
        pointer = pointer->next;
    }
    slow_pointer->next = *head;
    free(pointer);
}
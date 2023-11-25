#include "header.h"
void delete_index (list_caller **head, int index)
{
    list_caller *pointer = NULL, *slow_pointer = NULL;
    int i = 0;
    if (!*head) {
        fprintf(stderr, "List empty");
        return;
    }
    pointer = *head;
    if (!pointer->next) {
        free(pointer);
        *head = NULL;
        return;
    }
    for (i = 0; i < index - 1; i++)
    {
        slow_pointer = pointer;
        pointer = pointer->next;
    }
    if (!pointer) {
        fprintf(stderr, "Index out of bounds");
        return;
    }

    slow_pointer->next = pointer->next;
    free(pointer);
}
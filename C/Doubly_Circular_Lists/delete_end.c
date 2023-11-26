#include "header.h"
void delete_end (list_caller **head)
{
    list_caller *pointer = NULL;
    if (!*head) {
        fprintf(stderr, "list empty");
        return;
    }
    pointer = *head;
    while (pointer->next != *head)
    {
        pointer = pointer->next;
    }
    pointer->prev->next = *head;
    free(pointer);
}
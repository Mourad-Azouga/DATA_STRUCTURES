#include "header.h"
void delete_top (list_caller **head)
{
    list_caller *pointer = NULL;
    if (!*head)
    {
        fprintf(stderr, "empty list");
        exit(EXIT_FAILURE);
    }
    pointer = *head;
    if (pointer->next == NULL)
    {
        free(pointer);
        *head = NULL;
        return;
    }
    pointer->next->prev = NULL;
    *head = pointer->next;
    free(pointer);
}
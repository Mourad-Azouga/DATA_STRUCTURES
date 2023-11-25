#include "header.h"
void delete_end (list_caller **head)
{
    list_caller *pointer = NULL;
    if(!*head)
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
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->prev->next = NULL;
    free(pointer);
}
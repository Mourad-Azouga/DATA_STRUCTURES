#include "header.h"
void delete_index (list_caller **head, int index)
{
    list_caller *pointer = NULL;
    int i;
    if (!*head)
    {
        fprintf(stderr, "empty list");
        exit(EXIT_FAILURE);
    }
    pointer = *head;
    if (pointer->next == NULL || index <= 0) {
        (*head)->next = NULL;
        (*head)->prev = NULL;
        *head = NULL;
        free(pointer);
    }
    for (i = 0; i < index - 1; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "index out of bounds");
        return;
    }
    pointer->prev->next = pointer->next;
    pointer->next->prev = pointer->prev;
    free(pointer);
}
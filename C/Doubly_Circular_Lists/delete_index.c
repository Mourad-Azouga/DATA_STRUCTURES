#include "header.h"
void delete_index (list_caller **head, int index)
{
    list_caller *pointer = NULL;
    if (!*head) {
        fprintf(stderr, "list empty");
        return;
    }
    pointer = *head;
    if (pointer->next == *head) {
        pointer->prev = NULL;
        pointer->next = NULL;
        free(pointer);
        *head = NULL;
    }
    for (int i = 0; i < index-1; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "Index out of bounds");
        return;
    }
    pointer->prev->next = pointer->next;
    pointer->next->prev = pointer->prev;
    free(pointer);
}
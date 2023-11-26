#include "header.h"
void delete_index (list_caller **head, int index)
{
    list_caller *pointer = NULL, *slow_pointer = NULL;
    if (!*head) {
        fprintf(stderr, "empty_list");
        return;
    }
    pointer = *head;
    if (pointer->next == NULL) {
        free(pointer);
        *head = NULL;
        return;
    }
    for (int i =0; i < index - 1; i++)
    {
        slow_pointer = pointer;
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "Index out of bounds");
        return;
    }
    slow_pointer->next = pointer->next;
    free(pointer);
}
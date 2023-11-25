#include "header.h"
void delete_top(list_caller **head)
{
    list_caller *pointer = NULL;
    if (!head) {
        fprintf(stderr, "List empty");
        return;
    }
    pointer = *head;
    *head = pointer->next;
    free(pointer);
}
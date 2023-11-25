#include "header.h"
list_caller *find_index (list_caller **head, int index)
{
    list_caller *pointer = NULL;
    int i = 0;
    if (!*head) {
        fprintf(stderr, "list empty");
        return (NULL);
    }
    pointer = *head;
    for (i = 0; i < index - 1; i++)
    {
        pointer = pointer->next;
    }
    if (!pointer) {
        fprintf(stderr, "Index out of bounds");
        return (NULL);
    }
    return (pointer);
}
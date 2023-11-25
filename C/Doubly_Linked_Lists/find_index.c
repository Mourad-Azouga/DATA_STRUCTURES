#include "header.h"
list_caller *find_index (list_caller **head, int index)
{
    list_caller *pointer = NULL;
    int i;
    if (!*head) {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }
    pointer = *head;
    for (i = 0; i < index - 1; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "out of bounds");
        return (NULL);
    }   
    return (pointer);
}
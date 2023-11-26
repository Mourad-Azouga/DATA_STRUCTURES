#include "header.h"
list_caller *find_index (list_caller **head, int index)
{
    list_caller *pointer = NULL;
    if (!*head) {
        fprintf(stderr, "empty list");
        return (NULL);
    }
    pointer = *head;
    /*Always start the index with 0 in the main program for this to work, if index starts with 1, use i < index*/
    for(int i = 0; i < index - 1; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL) {
        fprintf(stderr, "Index out of bounds");
        return (NULL);
    }
    return (pointer);
}
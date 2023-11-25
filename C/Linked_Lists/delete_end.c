#include "header.h"
void delete_end (list_caller **head)
{
    list_caller *pointer = NULL, *tmp;
    if (!head) {
        fprintf(stderr, "List empty");
        return;        
    }
    pointer = *head;
    if (pointer->next == NULL) {
        free(pointer);
        *head = NULL;
        return;
    }
    while (pointer->next->next != NULL) 
    {
        pointer = pointer->next;
    }
    tmp = pointer->next;
    pointer->next = NULL;
    free(tmp);

}
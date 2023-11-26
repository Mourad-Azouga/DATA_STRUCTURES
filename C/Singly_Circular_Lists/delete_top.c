#include "header.h"
void delete_top (list_caller **head)
{
    list_caller *temp = NULL;
    if (!*head) {
        fprintf(stderr, "empty list");
        return;
    }
    temp = *head;
    *head = (*head)->next;
    free(temp);

}
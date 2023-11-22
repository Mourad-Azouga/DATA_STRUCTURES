#include "header.h"
/*This works as a Stack because it's LIFO*/
list_caller *create_node(list_caller **head, int data) {
    list_caller *new = (list_caller *)malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "Malloc error");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    if (*head == NULL) {
    new->next = NULL; 
    }
    else
    {
        new->next = *head;
    }
    *head = new;
    return (new);
}
void main (void) {
    list_caller *head = NULL;
    list_caller *new;
    int data;
    printf("New node data:\n");
    scanf("%d", &data);
    new = create_node(&head, data);
    printf("This is the newly added node's data: %d\n", new->data);

    data = 0;
    printf("New node data:\n");
    scanf("%d", &data);
    new = create_node(&head, data);
    printf("This is the newly added node's data: %d\n", new->data);

    data = 0;
    printf("New node data:\n");
    scanf("%d", &data);
    new = create_node(&head, data);
    printf("This is the newly added node's data: %d\n", new->data);
    list_caller *current = head;
    while (current != NULL)
    {
        printf("This is -> %d\n", current->data);
        current = current->next;
    }
}
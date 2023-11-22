#include "header.h"
list_caller *add_node_index(list_caller **head, int data, int index)
{
    int i;
    list_caller *new = (list_caller *)malloc(sizeof(list_caller *));
    if (new == NULL) {
        fprintf(stderr, "Malloc error");
        exit(EXIT_FAILURE);
    }

    new->data = data;
    if (*head == NULL){
        *head = new;
        return (new);
    }
    list_caller *pointer = *head;
    list_caller *ptr_slow = NULL;
    for (i = 0; i <= index - 1; i++)
    {
            if (pointer == NULL) {
            fprintf(stderr, "Index out of bounds\n");
            free(new);
            exit(EXIT_FAILURE);
        }
        ptr_slow = pointer;
        pointer = pointer->next;
    }
    if (ptr_slow == NULL) {
        new->next = *head;
        *head = new;
    }
    else
    {
    ptr_slow->next = new;
    new->next = pointer;
    }
    return(new);
}
void main (void) {
        list_caller *head = NULL;
    list_caller *new;
    int data, index;
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
    data = 0;
    printf("New node data:\n");
    scanf("%d", &data);
    printf("New node index:\n");
    scanf("%d", &index);
    new = add_node_index(&head, data, index);
    printf("This is the newly added node's data: %d\n", new->data);

    while (current != NULL)
    {
        printf("This is -> %d\n", current->data);
        current = current->next;
    }
}
#include "header.h"
/*This works as a Queue because it's FIFO*/
list_caller *add_node_end(list_caller **head, int data) {
    list_caller *new = (list_caller *) malloc(sizeof(list_caller));
    if (new == NULL) {
        fprintf(stderr, "Help me I'm drowning");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
        return (new);
    }
    list_caller *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new;
    return (new);
}
void main (void)
{
    list_caller *head = NULL;
    list_caller *new;
    int data;
    printf("New node data:\n");
    scanf("%d", &data);
    new = add_node_end(&head, data);
    printf("This is the newly added node's data: %d\n", new->data);

    data = 0;
    printf("New node data:\n");
    scanf("%d", &data);
    new = add_node_end(&head, data);
    printf("This is the newly added node's data: %d\n", new->data);

    data = 0;
    printf("New node data:\n");
    scanf("%d", &data);
    new = add_node_end(&head, data);
    printf("This is the newly added node's data: %d\n", new->data);

    list_caller *current = head;
    while (current != NULL)
    {
        printf("This is -> %d\n", current->data);
        current = current->next;
    }

}
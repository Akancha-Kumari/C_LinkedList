#include "doublyLL.h"

void insert_end_dll(Node **head, int val)
{
    if (*head == NULL)
    {
        exit(1);
    }
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
    {
        exit(2);
    }
    new_node->value = val;
    new_node->next = NULL;
    new_node->prev = *head;
    (*head)->next = new_node;
    *head = new_node;
}

// int main(int argc, char *argv[])
// {
//     Node *tail = NULL;
//     Node *head = NULL;

//     init(&tail, &head, 10);
//     insert_beginning(&tail, 20);
//     insert_beginning(&tail, 30);

//     insert_end_dll(&head, 40);

//     iteration(tail);
//     // iteration_Backward(head);
//     deallocation_dll(&tail, &head);
//     return (0);
// }
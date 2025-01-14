#include "doublyLL.h"

void insert_middle_dll(Node *node, int val)
{
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
    {
        exit(2);
    }
    new_node->value = val;
    new_node->prev = node;
    new_node->next = node->next;
    if (node->next != NULL)
    {
        node->next->prev = new_node;
    }
    node->next = new_node;
}

int main(int argc, char *argv[])
{
    Node *tail = NULL;
    Node *head = NULL;

    init(&tail, &head, 10);
    insert_beginning(&tail, 20);
    insert_beginning(&tail, 30);

    insert_end_dll(&head, 40);
    insert_middle_dll(tail->next->next, 35);

    iteration(tail);
    // iteration_Backward(head);
    deallocation_dll(&tail, &head);
    return (0);
}
#include "doublyLL.h"

void insert_beginning(Node **tail, int val)
{
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
    {
        exit(1);
    }
    new_node->value = val;
    new_node->prev = NULL;
    new_node->next = *tail;
    if (*tail != NULL)
    {
        (*tail)->prev = new_node;
    }
    *tail = new_node;
}

void init(Node **tail, Node **head, int val)
{
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
    {
        exit(1);
    }
    new_node->value = val;
    new_node->prev = NULL;
    new_node->next = NULL;
    *tail = new_node;
    *head = new_node;
}

int main(int argc, char *argv[])
{
    Node *tail = NULL;
    Node *head = NULL;

    init(&tail, &head, 10);
    insert_beginning(&tail, 20);
    insert_beginning(&tail, 30);

    iteration(tail);
    iteration_Backward(head);
    deallocation_dll(&tail, &head);
    return (0);
}
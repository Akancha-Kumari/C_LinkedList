#include "doublyLL.h"

void iteration(Node *tail)
{
    Node *curr = tail;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
}

void iteration_Backward(Node *head)
{
    Node *curr = head;
    printf("\n");
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->prev;
    }
}
#include "doublyLL.h"

void deallocation_dll(Node **tail, Node **head)
{
    if (*tail == NULL)
    {
        return;
    }
    Node *curr = *tail;
    while (curr->next != NULL)
    {
        curr = curr->next;
        free(curr->prev);
    }
    free(curr);
    *tail = NULL;
    *head = NULL;
}
#include "doublyLL.h"

int main(int argc, char *argv[])
{
    Node *tail = malloc(sizeof(Node));
    if (tail == NULL)
    {
        return (1);
    }
    tail->value = 10;
    tail->prev = NULL;
    tail->next = malloc(sizeof(Node));
    if (tail->next == NULL)
    {
        return (2);
    }
    tail->next->value = 20;
    tail->next->prev = tail;
    tail->next->next = malloc(sizeof(Node));
    if (tail->next->next == NULL)
    {
        return (2);
    }
    tail->next->next->value = 30;
    tail->next->next->prev = tail->next;
    tail->next->next->next = NULL;
    Node *head = tail->next->next;

    iteration(tail);
    iteration_Backward(head);
    deallocation_dll(&tail, &head);
    return (0);
}
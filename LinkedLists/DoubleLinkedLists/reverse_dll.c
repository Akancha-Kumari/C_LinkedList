#include "doublyLL.h"

void reverse_dll(Node **tail, Node **head)
{
    Node *curr = *tail;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = curr->prev;
        curr->prev = next;
        curr = next;
    }
    Node *aux = *tail;
    *tail = *head;
    *head = aux;
}

int main(int argc, char *argv[])
{
    Node *tail = NULL;
    Node *head = NULL;

    init(&tail, &head, 30);
    insert_beginning(&tail, 20);
    insert_beginning(&tail, 10);

    reverse_dll(&tail, &head);
    iteration(tail);
    deallocation_dll(&tail, &head);
    return (0);
}
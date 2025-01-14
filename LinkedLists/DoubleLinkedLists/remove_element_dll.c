#include "doublyLL.h"

void remove_element_dll(Node *node)
{
    if (node->prev != NULL)
    {
        node->prev->next = node->next;
    }
    if (node->next != NULL)
    {
        node->next->prev = node->prev;
    }
    free(node);
}
int main(int argc, char *argv[])
{
    Node *tail = NULL;
    Node *head = NULL;

    init(&tail, &head, 30);
    insert_beginning(&tail, 20);
    insert_beginning(&tail, 10);

    remove_element_dll(tail->next);
    iteration(tail);
    // iteration_Backward(head);
    deallocation_dll(&tail, &head);
    return (0);
}
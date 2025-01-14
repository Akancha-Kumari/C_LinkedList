#include "doublyLL.h"

Node *find_node(Node *tail, int val)
{
    Node *curr = tail;
    while (curr != NULL)
    {
        if (curr->value == val)
        {
            return (curr);
        }
        curr = curr->next;
    }
    return (NULL);
}
int main(int argc, char *argv[])
{
    Node *tail = NULL;
    Node *head = NULL;

    init(&tail, &head, 30);
    insert_beginning(&tail, 20);
    insert_beginning(&tail, 10);

    Node *found = find_node(tail, 20);
    if (found != NULL)
    {
        printf("value : %d\t address: %p\n", found->value, found->next);
    }
    else
    {
        printf("No node found\n");
    }
    iteration(tail);
    deallocation_dll(&tail, &head);
    return (0);
}
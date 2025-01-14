#include "list.h"

void deallocate(t_node **root)
{
    t_node *curr = *root;
    while (curr != NULL)
    {
        t_node *aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}
#include "list.h"

void add_start(t_node **root, int val)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
    {
        exit(3);
    }
    new_node->value = val;
    new_node->next = *root;
    *root = new_node;
}
#include "list.h"

void add_middle(t_node *root, int val)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
    {
        exit(4);
    }
    new_node->value = val;
    new_node->next = root->next;
    root->next = new_node;
}
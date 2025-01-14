#include "list.h"

void sort_list(t_node **root, int val)
{
    if (*root == NULL || (*root)->value > val)
    {
        add_start(root, val);
        return;
    }
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
    {
        exit(5);
    }
    new_node->value = val;
    t_node *curr = *root;
    while (curr->next != NULL)
    {
        if (curr->next->value > val)
        {
            add_middle(curr, val);
            return;
        }
        curr = curr->next;
    }
    add_middle(curr, val);
}

int main(int argc, char *argv[])
{
    t_node *root = NULL;

    sort_list(&root, 9);
    sort_list(&root, 2);
    sort_list(&root, 11);

    t_node *curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&root);
    return (0);
}
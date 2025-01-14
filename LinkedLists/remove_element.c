#include "list.h"

void remove_element(t_node **root, int val)
{
    if (*root == NULL)
    {
        return;
    }
    if ((*root)->value == val)
    {
        t_node *to_remove = *root;
        *root = (*root)->next;
        free(to_remove);
    }
    t_node *curr = *root;
    while (curr->next != NULL)
    {
        if (curr->next->value == val)
        {
            t_node *to_remove = curr->next;
            curr->next = curr->next->next;
            free(to_remove);
        }
        else
            curr = curr->next;
    }
}

int main(int argc, char *argv[])
{
    t_node *root = NULL;

    add_end(&root, 25);
    add_end(&root, 35);
    add_end(&root, 45);
    remove_element(&root, 45);

    t_node *curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&root);
    return (0);
}
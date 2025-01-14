#include "list.h"

void reverse(t_node **root)
{
    t_node *prev = NULL;
    t_node *curr = *root;

    if (*root == NULL)
        return;

    while (curr != NULL)
    {
        t_node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *root = prev;
}
int main(int argc, char *argv[])
{
    t_node *root = NULL;

    add_end(&root, 25);
    add_end(&root, 35);
    add_end(&root, 45);
    reverse(&root);

    t_node *curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&root);
    return (0);
}
#include "list.h"

int main(int argc, char *argv[])
{
    // what if the linked list is empty
    t_node *root = NULL;

    add_start(&root, 10);
    add_middle(root, 5);        // 2nd location
    add_middle(root->next, 11); // 3rd location

    add_end(&root, 5);
    add_end(&root, 45);

    // Instead of printing the node value using printf we can do iteration
    t_node *curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&root);
    return (0);
}
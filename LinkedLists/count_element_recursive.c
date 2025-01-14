#include "list.h"

int count_element_recursive(t_node *root)
{
    if (root == NULL)
    {
        return (0);
    }
    return (1 + count_element_recursive(root->next));
}
int main(int argc, char *argv[])
{
    t_node *root = NULL;

    add_end(&root, 25);
    add_end(&root, 35);
    add_end(&root, 45);
    int count = count_element_recursive(root);
    if (count > 0)
    {
        printf("\nTotal number of element in linked list is %d\n", count);
        t_node *curr = root;
        while (curr != NULL)
        {
            printf("%d\n", curr->value);
            curr = curr->next;
        }
        deallocate(&root);
    }
    else
        printf("\nTotal number of element in linked list is %d\n", count);
    return (0);
}
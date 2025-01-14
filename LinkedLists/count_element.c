#include "list.h"

int count_element(t_node *root)
{
    int counter = 0;
    t_node *curr = root;
    while (curr != NULL)
    {
        curr = curr->next;
        counter++;
    }
    return (counter);
}
int main(int argc, char *argv[])
{
    t_node *root = NULL;

    add_end(&root, 25);
    add_end(&root, 35);
    add_end(&root, 45);
    int count = count_element(root);
    if (count > 0)
    {
        printf("\nTotal number of element in linked list is %d\n", count);
    }
    t_node *curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&root);
    return (0);
}
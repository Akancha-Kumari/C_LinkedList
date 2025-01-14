#include "list.h"

int find_loops(t_node *root)
{
    t_node *slow = root;
    t_node *fast = root;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return (1);
        }
    }
    return (0);
}

int main(int argc, char *argv[])
{
    t_node *root = NULL;

    add_end(&root, 25);
    add_end(&root, 35);
    add_end(&root, 45);

    root->next->next->next = root->next;
    if (find_loops(root) == 1)
    {
        printf("linked list has a loop\n");
        return (1);
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
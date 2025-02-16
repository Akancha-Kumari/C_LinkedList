#include "list.h"

int main(int argc, char *argv[])
{
    // right now root is on the stack
    // t_node root;
    // root.value = 15;
    // root.next = NULL;

    // There is a dynamic memory allocation linked list
    t_node *root = malloc(sizeof(t_node));
    if (root == NULL)
        exit(1);
    root->value = 15;
    root->next = NULL;

    // adding element to the end of linked list instead of doing dynamic memory allocation multiple times
    add_end(&root, 40);
    add_end(&root, 50);

    // Print
    t_node *curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
}
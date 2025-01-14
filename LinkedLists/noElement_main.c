#include "list.h"

int main(int argc, char *argv[])
{
    t_node root;

    root.value = 15;

    // alternative way of writing the code without using any other element
    root.next = malloc(sizeof(t_node));
    if (root.next == NULL)
        exit(1);
    root.next->value = 23;
    root.next->next = NULL;

    printf("First Value is: %d\n", root.value);
    printf("Third Value is: %d\n", root.next->value);
}
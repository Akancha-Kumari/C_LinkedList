#include "list.h"

int main(int argc, char *argv[])
{
    t_node root;
    t_node elem2;

    root.value = 15;
    /* Instead of ending the linked list we are creating one more node and assigning the add of that node
    to the root address and then enter their value and make it a last linked list node.*/
    root.next = &elem2;
    elem2.value = 20;
    elem2.next = NULL;

    printf("First Value is: %d\n", root.value);
    printf("Third Value is: %d\n", elem2.value);
}
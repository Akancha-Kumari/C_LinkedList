#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

// single linked list

typedef struct s_node
{
    int value;
    struct s_node *next;
} t_node;

void add_end(t_node **root, int val);
void deallocate(t_node **root);
void add_start(t_node **root, int val);
void add_middle(t_node *root, int val);
void sort_list(t_node **root, int val);
void remove_element(t_node **root, int val);
void reverse(t_node **root);
int find_loops(t_node *root);
int count_element(t_node *root);
int count_element_recursive(t_node *root);
#endif
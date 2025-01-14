#ifndef DOUBLYLL_H
#define DOUBLYLL_H

#include <stdlib.h>
#include <stdio.h>

typedef struct s_node
{
    int value;
    struct s_node *next;
    struct s_node *prev;
} Node;

void iteration(Node *tail);
void iteration_Backward(Node *head);
void deallocation_dll(Node **tail, Node **head);

void insert_beginning(Node **tail, int val);
void init(Node **tail, Node **head, int val);
void insert_end_dll(Node **head, int val);
void insert_middle_dll(Node *node, int val);
void remove_element_dll(Node *node);
Node *found_node(Node *tail, int val);
Node *find_node_recursive(Node *node, int val);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AbhishekKumar <AbhishekKumar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:41:24 by AbhishekKum       #+#    #+#             */
/*   Updated: 2025/01/13 15:33:23 by AbhishekKum      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void add_end(t_node **root, int val)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
    {
        exit(2);
    }
    new_node->value = val;
    new_node->next = NULL;

    // if linked list is empty
    if (*root == NULL)
    {
        *root = new_node;
        return;
    }
    t_node *curr = *root;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
}
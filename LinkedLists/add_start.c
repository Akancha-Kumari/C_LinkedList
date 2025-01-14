/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AbhishekKumar <AbhishekKumar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:38:50 by AbhishekKum       #+#    #+#             */
/*   Updated: 2025/01/13 15:41:20 by AbhishekKum      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void add_start(t_node **root, int val)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
    {
        exit(3);
    }
    new_node->value = val;
    new_node->next = *root;
    *root = new_node;
}
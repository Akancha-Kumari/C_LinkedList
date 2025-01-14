/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AbhishekKumar <AbhishekKumar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:32:17 by AbhishekKum       #+#    #+#             */
/*   Updated: 2025/01/13 15:35:17 by AbhishekKum      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void deallocate(t_node **root)
{
    t_node *curr = *root;
    while (curr != NULL)
    {
        t_node *aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}
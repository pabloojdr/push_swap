/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabloojdr <pabloojdr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:06:39 by pabloojdr         #+#    #+#             */
/*   Updated: 2025/02/18 23:29:47 by pabloojdr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    choosealg(t_stack **a)
{
    if (stacksize(*a) == 2)
        algtwo(a);
}

void algtwo(t_stack **s)
{
    t_stack *first;
    t_stack *second;
    
    first = *s;
    second = first->next;
    if (first->index > second->index)
    {
        first->next = second->next;
        second->next = first;
        *s = second;
        ft_printf("sa\n");
    }
}

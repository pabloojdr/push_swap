/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_actions_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:51:18 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/19 18:20:24 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	if (*a == NULL)
		return ;
	aux = *a;
	*a = (*a)->next;
	aux->next = *b;
	*b = aux;
	ft_printf("pb\n");
}

void	sb(t_stack **s)
{
	t_stack	*first;
	t_stack	*second;

	first = *s;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*s = second;
	ft_printf("sb\n");
}

void	rb(t_stack **s)
{
	t_stack	*first;
	t_stack	*aux;

	first = *s;
	aux = (*s)->next;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = first;
	*s = first->next;
	first->next = NULL;
	ft_printf("rb\n");
}

void	rrb(t_stack **s)
{
	t_stack	*aux;

	aux = *s;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = *s;
	*s = aux->next;
	aux->next = NULL;
	ft_printf("rrb\n");
}

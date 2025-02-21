/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_actions_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:23:41 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/21 19:42:52 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	if (b == NULL)
		return ;
	aux = *b;
	*b = (*b)->next;
	aux->next = *a;
	*a = aux;
	ft_printf("pa\n");
}

void	sa(t_stack **s)
{
	t_stack	*first;
	t_stack	*second;

	first = *s;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*s = second;
	ft_printf("sa\n");
}

void	ra(t_stack **s, int p)
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
	if (p == 0)
		ft_printf("ra\n");
}

void	rra(t_stack **s, int p)
{
	t_stack	*aux;

	aux = *s;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = *s;
	*s = aux->next;
	aux->next = NULL;
	if (p == 1)
		ft_printf("rra\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rra(b, 1);
	ft_printf("rrr\n");
}

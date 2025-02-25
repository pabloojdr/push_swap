/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_even_more_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:46:53 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/25 17:57:26 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculatecost(t_stack **a, t_stack **b)
{
	t_stack	*auxb;
	int		size_a;
	int		size_b;

	auxb = *b;
	size_a = stacksize(*a);
	size_b = stacksize(*b);
	while (auxb != 0)
	{
		if (auxb->pos < size_b / 2)
			auxb->cost_b = auxb->pos - 1;
		else if (auxb->pos >= size_b / 2)
			auxb->cost_b = auxb->pos - size_b - 1;
		if (auxb->target_pos < size_a / 2)
			auxb->cost_a = auxb->target_pos - 1;
		else if (auxb->target_pos >= size_a / 2)
			auxb->cost_a = auxb->target_pos - size_a - 1;
		auxb = auxb->next;
	}
}

void	arrangestacks(t_stack **a, t_stack **b)
{
	t_stack	*min_node;

	min_node = mincost(b);
	if (min_node->cost_a < 0 && min_node->cost_b < 0) {
		printf("ca < 0 && cb < 0\n");
		arrangerrr(a, b, min_node->cost_a, min_node->cost_a);
	}else if (min_node->cost_a > 0 && min_node->cost_b > 0) {
		printf("ca > 0 && cb > 0\n");
		arrangerr(a, b, min_node->cost_a, min_node->cost_b);
	}else if (min_node->cost_a > 0 && min_node->cost_b < 0)
	{
		printf("ca > 0 && cb < 0\n");
		arrangerrx(a, min_node->cost_a, 0);
		arrangerrrx(b, min_node->cost_a, 1);
	}
	else if (min_node->cost_a < 0 && min_node->cost_b > 0)
	{
		printf("ca < 0 && cb > 0\n");
		arrangerrrx(a, min_node->cost_a, 0);
		arrangerrx(b, min_node->cost_b, 1);
	} else
		printf("ca = 0 && cb = 0\n");
	pa(a, b);
	algevaluate(a, b);
}

t_stack	*mincost(t_stack **b)
{
	int		min_cost;
	t_stack	*auxb;
	t_stack	*min_node;

	auxb = *b;
	min_node = auxb;
	min_cost = ft_abs(auxb->cost_a) + ft_abs(auxb->cost_b);
	while (auxb != 0)
	{
		if (ft_abs(auxb->cost_a) + ft_abs(auxb->cost_b) < min_cost)
		{
			min_cost = ft_abs(auxb->cost_a) + ft_abs(auxb->cost_b);
			min_node = auxb;
		}
		auxb = auxb->next;
	}
	return (min_node);
}

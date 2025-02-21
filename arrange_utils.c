/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:55:39 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/21 19:44:37 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arrangerrr(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	int	i;
	int	j;

	i = ft_abs(cost_a);
	j = ft_abs(cost_b);
	while (i > 0 && j > 0)
	{
		rrr(a, b);
		i--;
		j--;
	}
	if (i > 0)
		arrangerrrx(a, i, 0);
	else if (j > 0)
		arrangerrrx(b, j, 1);
}

void	arrangerr(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	int	i;
	int	j;

	i = ft_abs(cost_a);
	j = ft_abs(cost_b);
	while (i > 0 && j > 0)
	{
		rr(a, b);
		i--;
		j--;
	}
	if (i > 0)
		arrangerrx(a, i, 0);
	else if (j > 0)
		arrangerrx(b, i, 1);
}

void	arrangerrrx(t_stack **s, int cost, int t)
{
	int	i;

	i = ft_abs(cost);
	while (i > 0)
	{
		if (t == 0)
			rra(s, 1);
		else if (t == 1)
			rrb(s, 1);
		i--;
	}
}

void	arrangerrx(t_stack **s, int cost, int t)
{
	int	i;

	i = ft_abs(cost);
	while (i > 0)
	{
		if (t == 0)
			ra(s, 1);
		else if (t == 1)
			rb(s, 1);
		i--;
	}
}

/* void	arrangea(t_stack **s)
{
	
} */
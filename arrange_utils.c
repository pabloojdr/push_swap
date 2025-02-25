/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:55:39 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/25 18:01:24 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arrangerrr(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	printf("arrangerrr\n");
	int	i;
	int	j;

	printf("coste a: %i\n", cost_a);
	printf("coste b: %i\n", cost_b);
	i = ft_abs(cost_a);
	j = ft_abs(cost_b);
	printf("%i\n", i);
	printf("%i\n", j);
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
	printf("arrangerr\n");
	int	i;
	int	j;
	printf("coste a: %i\n", cost_a);
	printf("coste b: %i\n", cost_b);
	i = ft_abs(cost_a);
	j = ft_abs(cost_b);
	printf("%i\n", i);
	printf("%i\n", j);
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
	printf("arrangerrrx\n");
	int	i;

	printf("coste: %i\n", cost);
	printstack(s);
	i = ft_abs(cost);
	printf("%i\n", i);
	while (i > 0)
	{
		if (t == 0)
			rra(s, 0);
		else if (t == 1)
			rrb(s, 0);
		i--;
	}
}

void	arrangerrx(t_stack **s, int cost, int t)
{
	printf("arrangerrx\n");
	int	i;

	printf("coste: %i\n", cost);
	i = ft_abs(cost);
	printf("%i\n", i);
	while (i > 0)
	{
		if (t == 0)
			ra(s, 0);
		else if (t == 1)
			rb(s, 0);
		i--;
	}
	printf("Sale de arrangerrx\n");
}

/* void	arrangea(t_stack **s)
{
	
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:36:47 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/17 15:54:46 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkdup(char **arg)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (arg[i] != 0)
	{
		j = i + 1;
		aux = ft_atoi(arg[i]);
		while (arg[j] != 0)
		{
			if (aux == ft_atoi(arg[j]))
				return (1);
			j++;
		}
		i++;
	}
	ft_printf("Pasa de aquí");
	return (0);
}

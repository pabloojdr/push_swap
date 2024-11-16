/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:06:00 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/11/16 19:09:57 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checknumbers(char *numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (!ft_isdigit(numbers[i]))
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
}

void	ft_checkerrorssimple(char *numbers)
{
	char	**aux;
	int		i;
	int		j;
	int		a;
	int		b;

	aux = ft_split(numbers, ' ');
	i = 0;
	while (aux[i])
	{
		ft_checknumbers(aux[i]);
		a = ft_atoi(aux[i++]);
		j = i + 1;
		while (aux[j])
		{
			b = ft_atoi(aux[j++]);
			if (a == b)
			{
				ft_printf("Error\n");
				exit(1);
			}
		}
	}
}

void	ft_checkerrorsmult(int numarg, char *args[])
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 1;
	while (i < numarg)
	{
		ft_checknumbers(args[i]);
		a = ft_atoi(args[i++]);
		j = i + 1;
		while (j < numarg)
		{
			b = ft_atoi(args[j++]);
			if (a == b)
			{
				ft_printf("Error\n");
				exit(1);
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		exit(1);
	else if (argc == 2)
		ft_checkerrorssimple(argv[1]);
	else
		ft_checkerrorsmult(argc, argv);
}

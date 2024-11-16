/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:57:38 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/11/16 20:11:39 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/// @brief Checks if the elements of a string are numbers
/// @param numbers String to check
void	ft_checknumbers(char *numbers);

/// @brief Checks whether a string only contains no-repeating numbers
/// @param numbers String to check
void	ft_checkerrorssimple(char *numbers);

/// @brief Checks whether the received arguments contain repeating numbers 
/// @param numarg Number of arguments
/// @param args Arguments to check
void	ft_checkerrorsmult(int numarg, char *args[]);

#endif
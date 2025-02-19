/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:57:38 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/19 18:21:17 by pcampoy-         ###   ########.fr       */
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

/// @brief Checks how many numbers are included in a given array
/// @param argv Array to check
/// @return The number of characters cataloged as digit in a given array
int		checknargs(char *argv);

/// @brief Checks whether a given array contains only digits, 
/// spaces and plus or minus signs
/// @param arg Array to check
/// @return 1 if false, 0 otherwise
int		checkalchar(char **arg);

/// @brief Checks if a given array contains duplicated numbers
/// @param arg Array to check
/// @return 1 if true, 0 otherwise
int		checkdup(char **arg);

/// @brief Checks the possible errors of the arguments given in push_swap
/// @param argc number of arguments
/// @param argv arguments
/// @return Array of chars filled with the numbers to sort in push_swap
char	**check(int argc, char *argv[]);

/// @brief Checks if there are duplicate numbers or 
// bigger/smaller numbers than integer limits 
/// @param arg Array to check
/// @return -1 if there are any errors, 0 otherwise
int		checkerr(char **arg);

/// @brief Frees memory
/// @param s 
void	ft_free(char **s);

/// @brief Calculates the size of a stack
/// @param s Stack
/// @return Size of the stack
int		stacksize(t_stack *s);

/// @brief  Creates a new node of a list of stacks
/// @param content value of the node
/// @return a node whose type is t_stack
t_stack	*initstack(int content);

/// @brief Initializes a list of stacks
/// @param s List to initialize
/// @param args  Numbers to include in the stack
void	initargs(t_stack **s, char **args);

/// @brief Print every node's value of a stack
/// @param s Stack to print
void	printstack(t_stack **s);

/// @brief Assigns indices from lowest to highest to the elements of a stack
/// @param s Stack
void	asignindex(t_stack *s);

void	asignposition(t_stack *s);

void	asigntargetposition(t_stack **a, t_stack **b);

int		getlowestindex(t_stack **a);

int		getpositionbyindex(int index, t_stack **a);

void	choosealg(t_stack **a, t_stack **b);

void	algtwo(t_stack **s);

void	algthree(t_stack **s);

void	algps(t_stack **a, t_stack **b);

void	pa(t_stack **a, t_stack **b);

void	sa(t_stack **s);

void	ra(t_stack **s);

void	rra(t_stack **s);

void	pb(t_stack **a, t_stack **b);

void	sb(t_stack **s);

void	rb(t_stack **s);

void	rrb(t_stack **s);
#endif
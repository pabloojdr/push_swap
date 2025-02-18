/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:57:38 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/18 18:07:37 by pcampoy-         ###   ########.fr       */
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

/// @brief 
/// @param argc 
/// @param argv 
/// @return 
char	**check(int argc, char *argv[]);

/// @brief 
/// @param arg 
/// @return 
int		checkerr(char **arg);

/// @brief 
/// @param s 
void	ft_free(char **s);

/// @brief 
/// @param s 
/// @return 
int		stacksize(t_stack *s);

/// @brief 
/// @param content 
/// @return 
t_stack	*initstack(int content);

/// @brief 
/// @param s 
/// @param args  
void	initargs(t_stack **s, char **args);

/// @brief 
/// @param s 
void	printstack(t_stack **s);

/// @brief 
/// @param s 
void	asignindex(t_stack *s);

#endif
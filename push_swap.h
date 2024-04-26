/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:33:52 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/26 16:25:59 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft.h"

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

int	ds_atoi(char *str);
int	ft_check_symbol(char **av);
void	ft_check_argc(int i);
void	ft_error(void);
void	ft_push(t_stack **from_stack, t_stack **to_stack);
int	ft_first_num(t_stack **stack);
int	ft_last_num(t_stack **stack);
void	ft_lst_free(t_stack **lst, void (*del)(int*));
void	ft_del(int *i);
t_stack	*fill_list(t_stack *a, char **str);
void	push_swap(char *str);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
int	*fill_array(int *tab, t_stack *a, int size);
int	ft_size_array(t_stack *a);
char	*ds_strjoin(char *s1, char const *s2);
t_stack	*ds_lstnew(int num);
void	check_duplicate(int *tab, int size);
int	*sorted_array(int *array, int size);
t_stack	*fill_index(t_stack *stack, int *tab, int size);
void	butterfly(t_stack **a, t_stack **b, int i);
int	ft_range(int i);
void	push_b_in_a(t_stack **a, t_stack **b, int i);
int	index_max(t_stack *stack, int i);
void	ft_rrotate(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_swap(t_stack **stack);
void	print_list(t_stack *stack);


#endif
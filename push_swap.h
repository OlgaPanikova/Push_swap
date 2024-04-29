/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:33:52 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/29 17:29:03 by opanikov         ###   ########.fr       */
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

t_stack	*fill_list(t_stack *a, char **str);
t_stack	*ds_lstnew(int num);
t_stack	*fill_index(t_stack *stack, int *tab, int size);

int		ds_atoi(char *str);
int		ft_check_symbol(char **av);
int		*fill_array(int *tab, t_stack *a, int size);
int		ft_size_array(t_stack *a);
int		*sorted_array(int *array, int size);
int		index_max(t_stack *stack, int i);
int		ft_range(int i);
int		check_empty(char *str);

int		excep_2(t_stack **a);
int		excep_3(t_stack **a);
int		excep_4(t_stack **a, t_stack **b, int i);
int		excep_5(t_stack **a, t_stack **b);

void	check_count_node(t_stack **a);
void	check_duplicate(int *tab, int size);
void	ft_check_argc(int i);
void	ft_error(void);
void	ft_push(t_stack **from_stack, t_stack **to_stack);
void	push_swap(char *str);
void	butterfly(t_stack **a, t_stack **b, int i);
void	push_b_in_a(t_stack **a, t_stack **b, int i);
void	check_sorted(int *tab, int size);

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
void	ft_rrotate(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_swap(t_stack **stack);

char	*ds_strjoin(char *s1, char const *s2);

#endif
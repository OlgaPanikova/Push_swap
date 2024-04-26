/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:30:38 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/26 18:18:52 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	int	tmp;
	int	tmp2;

	if (stack == NULL && (*stack)->next == NULL)
		return;
	tmp = (*stack)->num;
	tmp2 = (*stack)->index;
	(*stack)->num = (*stack)->next->num;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->num = tmp;
	(*stack)->next->index = tmp2;
}


void	sa(t_stack **a)
{
	// int	tmp;
	// int	tmp2;

	if (a == NULL && (*a)->next == NULL)
		exit(1);
	ft_swap(a);
	write(1, "sa\n", 3);
	// tmp = (*a)->num;
	// tmp2 = (*a)->index;
	// (*a)->num = (*a)->next->num;
	// (*a)->index = (*a)->next->index;
	// (*a)->next->num = tmp;
	// (*a)->next->index = tmp2;
}

void	sb(t_stack **b)
{
	// int	tmp;
	// int	tmp2;

	if (b == NULL && (*b)->next == NULL)
		exit(1);
	ft_swap(b);
	write(1, "sb\n", 3);
	// tmp = (*b)->num;
	// tmp2 = (*b)->index;
	// (*b)->num = (*b)->next->num;
	// (*b)->index = (*b)->next->index;
	// (*b)->next->num = tmp;
	// (*b)->next->index = tmp2;
}

void	ss(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(EXIT_FAILURE);
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	tmp = *stack;
	last = (*stack)->next;
	if(tmp->next == NULL)
		return ;
	while((*stack)->next != NULL)
		*stack = (*stack)->next;
	(*stack)->next = tmp;
	tmp->next = NULL;
	*stack = last;
}

void	ra(t_stack **a)
{
	// t_stack	*tmp;
	// t_stack *last;

	if (a == NULL)
		exit(1);
	ft_rotate(a);
	write(1, "ra\n", 3);
	// tmp = *a;
	// *a = (*a)->next;
	// last = tmp;
	// while(last->next != NULL)
	// 	last = last->next;
	// last->next = tmp;
	// tmp->next = NULL;
	
}

void	rb(t_stack **b)
{
	// t_stack	*tmp;
	// t_stack	*last;

	if (b == NULL)
		exit(1);
	ft_rotate(b);
	write(1, "rb\n", 3);
	// tmp = *b;
	// last = (*b)->next;
	// while((*b)->next != NULL)
	// 	*b = (*b)->next;
	// (*b)->next = tmp;
	// tmp->next = NULL;
	// *b = last;
}
void	rr(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(1);
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}

// void	rb(t_stack **b)
// {
// 	t_stack	*tmp;
// 	t_stack	*last;

// 	if (b == NULL)
// 		exit(1);
// 	tmp = *b;
// 	*b = (*b)->next;
// 	last = tmp;
// 	while(last->next != NULL)
// 		last = last->next;
// 	last->next = tmp;
// 	tmp->next = NULL;
// }

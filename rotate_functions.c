/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:32:19 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/29 17:36:15 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	tmp = *stack;
	last = (*stack)->next;
	if (tmp->next == NULL)
		return ;
	while ((*stack)->next != NULL)
		*stack = (*stack)->next;
	(*stack)->next = tmp;
	tmp->next = NULL;
	*stack = last;
}

void	ra(t_stack **a)
{
	if (a == NULL)
		exit(1);
	ft_rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (b == NULL)
		exit(1);
	ft_rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(1);
	ft_rotate(a);
	ft_rotate(b);
	write (1, "rr\n", 3);
}

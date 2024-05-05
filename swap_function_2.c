/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:51:07 by opanikov          #+#    #+#             */
/*   Updated: 2024/05/03 14:50:00 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*previous;

	last = *stack;
	while (last->next != NULL)
	{
		previous = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	previous->next = NULL;
}

void	rra(t_stack **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return ;
	ft_rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (b == NULL || (*b)->next == NULL)
		return ;
	ft_rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		return ;
	ft_rrotate(a);
	ft_rrotate(b);
	write(1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:51:07 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/13 18:06:28 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(1);
	ra(a);
	rb(b);
}

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*previous;

	if (*a == NULL || (*a)->next == NULL)
		exit(1);
	last = *a;
	while (last->next != NULL)
	{
		previous = last;
		last = last->next;
	}
	last->next = *a;
	*a = last;
	previous->next = NULL;
}

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*previous;

	if (b == NULL || (*b)->next == NULL)
		exit(EXIT_FAILURE);
	last = *b;
	while (last->next != NULL)
	{
		previous = last;
		last = last->next;
	}
	last->next = *b;
	*b = last;
	previous->next = NULL;
}

void	rrr(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(EXIT_FAILURE);
	rra(a);
	rrb(b);
}

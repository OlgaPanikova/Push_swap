/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:51:07 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/26 15:59:02 by lelichik         ###   ########.fr       */
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
	// t_stack	*last;
	// t_stack	*previous;

	if (*a == NULL || (*a)->next == NULL)
		exit(1);
	ft_rrotate(a);
	write(1, "rra\n", 4);
	// last = *a;
	// while (last->next != NULL)
	// {
	// 	previous = last;
	// 	last = last->next;
	// }
	// last->next = *a;
	// *a = last;
	// previous->next = NULL;
}

void	rrb(t_stack **b)
{
// 	t_stack	*last;
// 	t_stack	*previous;

	if (b == NULL || (*b)->next == NULL)
		exit(EXIT_FAILURE);
	ft_rrotate(b);
	write(1, "rrb\n", 4);
	// last = *b;
	// while (last->next != NULL)
	// {
	// 	previous = last;
	// 	last = last->next;
	// }
	// last->next = *b;
	// *b = last;
	// previous->next = NULL;
}

void	rrr(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(EXIT_FAILURE);
	ft_rrotate(a);
	ft_rrotate(b);
	write(1, "rrr\n", 4);
}

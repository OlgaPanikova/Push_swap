/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:37:24 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/26 15:56:49 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*tmp;

	if(*from_stack == NULL)
		exit(1);
	tmp = *from_stack;
	*from_stack = (*from_stack)->next;
	tmp->next = *to_stack;
	*to_stack = tmp;
	
}
void	pa(t_stack **a, t_stack **b)
{
	if (*b == NULL)
		exit(1);
	ft_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (*a == NULL)
		exit(1);
	ft_push(a, b);
	write(1, "pb\n", 3);
}

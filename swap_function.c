/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:30:38 by opanikov          #+#    #+#             */
/*   Updated: 2024/05/03 14:50:13 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	int	tmp;
	int	tmp2;

	if (stack == NULL && (*stack)->next == NULL)
		return ;
	tmp = (*stack)->num;
	tmp2 = (*stack)->index;
	(*stack)->num = (*stack)->next->num;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->num = tmp;
	(*stack)->next->index = tmp2;
}

void	sa(t_stack **a)
{
	if (a == NULL && (*a)->next == NULL)
		return ;
	ft_swap(a);
	write (1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (b == NULL && (*b)->next == NULL)
		return ;
	ft_swap(b);
	write (1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		return ;
	ft_swap(a);
	ft_swap(b);
	write (1, "ss\n", 3);
}

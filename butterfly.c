/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:41:07 by lelichik          #+#    #+#             */
/*   Updated: 2024/04/29 17:58:01 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	butterfly(t_stack **a, t_stack **b, int i)
{
	int	count;
	int	n;

	count = 0;
	n = ft_range(i);
	while (*a && count < i)
	{
		if ((*a)->index <= count)
		{
			pb(a, b);
			rb(b);
			count++;
		}
		else if ((*a)->index <= count + n)
		{
			pb(a, b);
			count++;
		}
		else
			ra(a);
	}
}

int	ft_range(int size)
{
	int	i;
	int	a;
	int	b;

	i = 1;
	while (i * i <= size)
	{
		if (i * i <= size)
			a = i;
		if (i * i * i <= size)
			b = i;
		i++;
	}
	i = a + b + 1;
	return (i);
}

void	push_b_in_a(t_stack **a, t_stack **b, int i)
{
	while (i > 0)
	{
		while ((*b)->index != i - 1)
		{
			if (index_max(*b, i) == 1)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
		i--;
	}
}

int	index_max(t_stack *stack, int i)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->index != 0)
	{
		if (tmp->index == i - 1)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

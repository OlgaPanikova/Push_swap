/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:41:07 by lelichik          #+#    #+#             */
/*   Updated: 2024/04/26 16:29:55 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	butterfly(t_stack **a, t_stack **b, int i)
{
	int	count;
	int	n;

	count = 0;
	n = ft_range(i);
	while(*a && count < i)
	{
		if((*a)->index <= count)
		{
			pb(a, b);
			printf("CHECK B = \n");
			print_list(*b);
			rb(b);
			count++;
			printf("CHECK A = \n");
			print_list(*a);
			printf("CHECK B = \n");
			print_list(*b);
		}
		else if((*a)->index <= count + n)
		{
			pb(a, b);
			count++;
			printf("CHECK A = \n");
			print_list(*a);
			printf("CHECK B = \n");
			print_list(*b);
		}
		else
			ra(a);
	}
}
int	ft_range(int i)
{
	int	j;

	j = 1;
	while (j * j < i * 2)
		j++;
	return (j);
}

void	push_b_in_a(t_stack **a, t_stack **b, int i)
{
	while(i > 0)
	{
		while((*b)->index != i - 1)
		{
			if(index_max(*b, i) == 1)
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
	t_stack *tmp;

	tmp = stack;
	while(tmp->index != 0)
	{
		if(tmp->index == i - 1)
			return(1);
		tmp = tmp->next;
	}
	return(0);
}


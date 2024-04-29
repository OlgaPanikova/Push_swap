/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:41:05 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/29 17:26:49 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	excep_2(t_stack **a)
{
	if (*a == NULL)
		exit(1);
	if ((*a)->index > (*a)->next->index)
		sa(a);
	else
		exit(0);
	return (1);
}

int	excep_3(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (*a == NULL)
		exit(1);
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (((*a)->index > (*a)->next->index) && ((*a)->index > tmp->index))
		ra(a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
	if ((*a)->next->index > tmp->index)
	{
		rra(a);
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
	return (1);
}

int	excep_4(t_stack **a, t_stack **b, int i)
{
	if (*a == NULL)
		exit(1);
	while (((*a)->index != i - 1))
	{
		if (index_max(*a, i) == 1)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	excep_3(a);
	pa(a, b);
	ra(a);
	return (1);
}

int	excep_5(t_stack **a, t_stack **b)
{
	int	j;
	int	i;

	i = 2;
	j = 0;
	while (j != 2)
	{
		while ((*a)->index != i - 1)
		{
			if (index_max(*a, i) == 1)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
		i--;
		j++;
	}
	excep_3(a);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
	return (1);
}

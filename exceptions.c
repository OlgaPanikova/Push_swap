/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:41:05 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/28 15:50:15 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	excep_2(t_stack **a)
{
	if(*a == NULL)
		exit(1);
	if((*a)->index > (*a)->next->index)
		sa(a);
	else
		exit(0);
}

void	excep_3(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if(*a == NULL)
		exit(1);
	while(tmp->next != NULL)
		tmp = tmp->next;
	if(((*a)->index > (*a)->next->index) && ((*a)->index > tmp->index))
		ra(a);
	if((*a)->index > (*a)->next->index)
		sa(a);
	if((*a)->next->index > tmp->index)
	{
		rra(a);
		if((*a)->index > (*a)->next->index)
		sa(a);
	}
}
void	excep_4(t_stack **a, t_stack **b, int i)
{
	if(*a == NULL)
		exit(1);
	while(((*a)->index != i - 1))
	{
		if(index_max(*a, i) == 1)
			ra(a);
		else rra(a);
	}
	pb(a, b);
	excep_3(a);
	pa(a, b);
	ra(a);
}

void	excep_5(t_stack **a, t_stack **b, int i)
{
	while(((*a)->index != 0))
	{
		if(index_min(*a) == 1)
			ra(a);
		else rra(a);
	}
	pb(a, b);
	excep_4(a, b, i);
	pa(a, b);
}

int	index_min(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	while(tmp->index != 0)
	{
		if(tmp->index == 0)
			return(1);
		tmp = tmp->next;
	}
	return(0);
}
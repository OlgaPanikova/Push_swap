/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:30:38 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/22 15:22:53 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	int	tmp;
	int	tmp2;

	if (a == NULL && (*a)->next == NULL)
		exit(EXIT_FAILURE);
	tmp = (*a)->num;
	tmp2 = (*a)->index;
	(*a)->num = (*a)->next->num;
	(*a)->index = (*a)->next->index;
	(*a)->next->num = tmp;
	(*a)->next->index = tmp2;
}

void	sb(t_stack **b)
{
	int	tmp;
	int	tmp2;

	if (b == NULL && (*b)->next == NULL)
		exit(EXIT_FAILURE);
	tmp = (*b)->num;
	tmp2 = (*b)->index;
	(*b)->num = (*b)->next->num;
	(*b)->index = (*b)->next->index;
	(*b)->next->num = tmp;
	(*b)->next->index = tmp2;
}

void	ss(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		exit(EXIT_FAILURE);
	sa(a);
	sb(b);
}

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack *last;

	if (a == NULL || (*a)->next == NULL)
		exit(1);
	tmp = *a;
	*a = (*a)->next;
	last = tmp;
	while(last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	
}

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (b == NULL)
		exit(1);
	tmp = *b;
	*b = (*b)->next;
	last = tmp;
	while(last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

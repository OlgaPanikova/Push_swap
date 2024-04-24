/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:41:07 by lelichik          #+#    #+#             */
/*   Updated: 2024/04/22 15:13:58 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			rb(b);
			count++;
		}
		else if((*a)->index <= count + n)
		{
			pb(a, b);
			count++;
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

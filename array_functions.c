/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:21:34 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/22 15:16:40 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sorted_array(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

t_stack	*fill_index(t_stack *stack, int *tab, int size)
{
	int		i;
	//int		size;
	t_stack	*tmp;

	i = 0;
//	size = ft_size_array(stack);
	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		ft_error();
	while (i < size)
	{
		tmp = stack;
		while (tmp != NULL)
		{
			if (tab[i] == tmp->num)
				tmp->index = i;
			tmp = tmp->next;
		}
		i++;
	}
	return (stack);
}
int	*fill_array(int *tab, t_stack *a, int size)
{
	int		i;
	//int		len;
	t_stack	*tmp;

	i = 0;
	//len = ft_size_array(a);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (!tab)
		exit(1);
	tmp = a;
	while (tmp != NULL && i < size)
	{
		tab[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	check_duplicate(tab, size);
	tab = sorted_array(tab, size);
	return (tab);
}

int	ft_size_array(t_stack *a)
{
	int		count;
	t_stack	*current;

	count = 1;
	current = a;
	while (current->next != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
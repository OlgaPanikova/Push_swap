/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:21:34 by opanikov          #+#    #+#             */
/*   Updated: 2024/05/02 18:11:36 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

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
	t_stack	*tmp;

	i = 0;
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
	t_stack	*tmp;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (!tab)
	{
		clean_up(&a);
		ft_error();
	}
	tmp = a;
	while (tmp != NULL && i < size)
	{
		tab[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	if (check_duplicate(tab, size) == 1)
		ft_error_free(&a, &tab);
	if (check_sorted(tab, size) == 1)
		ft_free_sorted(&a, &tab);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:53:31 by opanikov          #+#    #+#             */
/*   Updated: 2024/05/03 15:29:53 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clean_up(t_stack **a)
{
	t_stack	*current;
	t_stack	*next;

	current = *a;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*a = NULL;
}

void	clean_up_array(int **array)
{
	free(*array);
	*array = NULL;
}

void	ft_error_free(t_stack **a, int **array)
{
	clean_up(a);
	clean_up_array(array);
	write (2, "Error\n", 6);
	exit(1);
}

void	ft_free_sorted(t_stack **a, int **array)
{
	clean_up(a);
	clean_up_array(array);
	exit(0);
}

void	free_char_array(char **nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		free(nums[i]);
		i++;
	}
	free(nums);
}

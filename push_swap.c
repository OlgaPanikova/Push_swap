/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:38:52 by opanikov          #+#    #+#             */
/*   Updated: 2024/05/03 15:37:19 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_list(t_stack *a, char **str)
{
	int		i;
	t_stack	*new_node;
	t_stack	*current;

	i = 0;
	a = ds_lstnew(ds_atoi(str[i++]));
	if (!a)
		ft_error();
	while (str[i])
	{
		new_node = ds_lstnew(ds_atoi(str[i]));
		if (!new_node)
		{
			free_char_array(str);
			ft_error();
		}
		current = a;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		i++;
	}
	check_count_node(&a);
	return (a);
}

void	exceptions(t_stack **a, t_stack **b, int i)
{
	int	j;

	j = 0;
	if (i == 2)
		j += excep_2(a);
	else if (i == 3)
		j += excep_3(a);
	else if (i == 4)
		j += excep_4(a, b, i);
	else if (i == 5)
		j += excep_5(a, b);
	if (j != 0)
	{
		clean_up(a);
		exit(0);
	}
}

void	push_swap(char *str)
{
	t_stack	*a;
	t_stack	*b;
	char	**nums;
	int		*array;
	int		len;

	a = NULL;
	array = NULL;
	b = NULL;
	nums = ft_split(str, ' ');
	if (!nums)
		ft_error();
	ft_check_symbol(nums);
	a = fill_list(a, nums);
	free_char_array(nums);
	len = ft_size_array(a);
	array = fill_array(array, a, len);
	a = fill_index(a, array, len);
	clean_up_array(&array);
	exceptions(&a, &b, len);
	butterfly(&a, &b, len);
	push_b_in_a(&a, &b, len);
	clean_up(&a);
	exit(0);
}

int	main(int argc, char **argv)
{
	char	*str;

	ft_check_argc(argc);
	argc = 1;
	if (check_empty(argv[argc]) == 1)
		ft_error();
	str = ft_strdup(argv[argc]);
	if (!str)
		ft_error();
	argc++;
	while (argv[argc])
	{
		if (check_empty(argv[argc]) == 1)
		{
			free(str);
			ft_error();
		}
		str = ds_strjoin(str, argv[argc]);
		argc++;
	}
	push_swap(str);
	free(str);
	return (0);
}

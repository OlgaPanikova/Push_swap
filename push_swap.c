/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:38:52 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/26 18:20:13 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_string_array(char **argv) {
    for (int i = 0; argv[i]; i++) {
        printf("%s\n", argv[i]);
    }
}

void print_int_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}

void	print_list(t_stack *stack)
{
	t_stack *current = stack;
	while (current != NULL)
	{
		printf("NUM = %d\n", current->num);
		printf("INDEX = %d\n", current->index);
		current = current->next;
	}
}

t_stack	*fill_list(t_stack *a, char **str)
{
	int		i;
	t_stack	*new_node;
	t_stack	*current;

	i = 0;
	a = ds_lstnew(ds_atoi(str[i++]));
	if (!a)
		exit(1);
	while (str[i])
	{
		new_node = ds_lstnew(ds_atoi(str[i]));
		if (!new_node)
			exit(1);
		current = a;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		i++;
	}
	return(a);
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
	ft_check_symbol(nums);
	// if(((ft_check_symbol(nums)) == 1))
	// {
	// 	free(nums);
	// 	exit(1);
	// }
	a = fill_list(a, nums);
	free(nums);
	len = ft_size_array(a);
 	array = fill_array(array, a, len);
	a = fill_index(a, array, len);
	//print_int_array(array, len = ft_size_array(a));
	print_list(a);
	printf("BUTTERFLY =\n");
	butterfly(&a, &b, len);
	printf("B =\n");
	print_list(b);
	printf("A =\n");
	print_list(a);
	push_b_in_a(&a, &b, len);
	//printf("A =\n");
	//print_list(a);
	//printf("B =\n");
	//print_list(b);
 }

int	main(int argc, char **argv)
{
	char	*str;

	ft_check_argc(argc);
	argc = 1;
	str = ft_strdup(argv[argc]);
	argc++;
	while (argv[argc])
	{
		str = ds_strjoin(str, argv[argc]);
		argc++;
	}
	push_swap(str);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optional_function.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:17:28 by lelichik          #+#    #+#             */
/*   Updated: 2024/04/29 17:27:24 by opanikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ds_atoi(char *str)
{
	int			i;
	int			sing;
	long long	res;

	sing = 1;
	i = 0;
	res = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 +(str[i] - '0');
		i++;
		if (!(res * sing >= -2147483648 && res * sing <= 2147483647))
			ft_error();
	}
	return (res * sing);
}

char	*ds_strjoin(char *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return ((char *)malloc(sizeof(char)));
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!res)
		return ((void *)0);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i++] = ' ';
	while (s2[j])
		res[i++] = s2[j++];
	free (s1);
	res[i] = '\0';
	return (res);
}

t_stack	*ds_lstnew(int num)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->num = num;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	check_count_node(t_stack **a)
{
	if ((*a)->next == NULL)
		exit(0);
}

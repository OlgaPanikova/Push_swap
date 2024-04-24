/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelichik <lelichik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:22:10 by opanikov          #+#    #+#             */
/*   Updated: 2024/04/22 15:15:21 by lelichik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_symbol(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] >= '0' && av[i][j] <= '9') ||
				(av[i][j] == '-' && av[i][j + 1] >= '0' && av[i][j + 1] <= '9') ||
				(av[i][j] == '+' && av[i][j + 1] >= '0' && av[i][j + 1] <= '9'))
			{
				j++;
			}
			else
			{
				// write(1, "Error\n", 6);
				// return (1);
				ft_error();
			}
		}
		i++;
	}
	return (0);
}

void	ft_check_argc(int i)
{
	if (i <= 1)
		exit(1);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	check_duplicate(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				ft_error();
			else
				j++;
		}
		i++;
	}
}

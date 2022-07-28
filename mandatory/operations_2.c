/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:34:15 by aarribas          #+#    #+#             */
/*   Updated: 2022/07/28 14:02:24 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_clear(int *index, t_stack *stack_a)
{
	size_t	i;
	size_t	size;

	size = stack_a->size;
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			index[i] = index[i + 1];
			i++;
		}
	}
}

void	index_ra(int *index, t_stack *stack_a)
{
	size_t	i;
	int		tmp;
	size_t	size;

	size = stack_a->size;
	tmp = index[0];
	i = 0;
	while (i < (size - 1))
	{
		index[i] = index[i + 1];
		i++;
	}
	index[i] = tmp;
}

void	index_rra(int *index, t_stack *stack_a)
{
	size_t	i;
	int		tmp;
	size_t	size;

	size = stack_a->size;
	tmp = index[size - 1];
	i = size;
	while (i > 0)
	{
		index[i] = index[i - 1];
		i--;
	}
	index[0] = tmp;
}

void	index_pa(t_stack *stack_a, t_stack *stack_b, int *index)
{
	size_t	i;

	if (stack_b->size > 0)
	{
		i = stack_a->size;
		while (i > 0)
		{
			index[i] = index[i - 1];
			i--;
		}
		index[0] = stack_b->array[0];
		stack_a->size++;
		stack_b->size--;
		i = 0;
		while (i < stack_b->size)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
	}
}

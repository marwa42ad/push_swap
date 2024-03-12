/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_elem_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:31:08 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:31:11 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_elem_stack_a(t_stacks *stacks, t_stack_b *head_b)
{
	int	i;
	int	size;

	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	if (stacks->head_a->content != search_stack_a(stacks, head_b->content))
	{
		i = find_index_stack_a(stacks, search_stack_a(stacks, head_b->content));
		size = ft_listsize_a(stacks->head_a);
		if (size % 2 == 0)
		{
			if (i + 1 > size / 2)
				stacks->moves->rra = (size - i);
			else
				stacks->moves->ra = i;
		}
		else
		{
			if (i > size / 2)
				stacks->moves->rra = (size - i);
			else
				stacks->moves->ra = i;
		}
	}
	do_moves_elem_stack_a(stacks);
}

void	do_moves_elem_stack_a(t_stacks *stacks)
{
	while (stacks->moves->ra-- != 0)
		ft_rotate(stacks, 'a');
	while (stacks->moves->rra-- != 0)
		ft_rev_rotate(stacks, 'a');
	ft_push(stacks, 'a');
}

int	search_stack_a(t_stacks *stacks, int nbr)
{
	t_stack_a	*head_a;
	int			size;
	int			flag;
	int			i;

	i = 0;
	flag = 0;
	head_a = stacks->head_a;
	size = ft_listsize_a(stacks->head_a);
	while (flag == 0)
	{
		i = 0;
		nbr++;
		head_a = stacks->head_a;
		while (i++ < size)
		{
			if (head_a->content == nbr)
				flag = 1;
			head_a = head_a->next;
		}
	}
	return (nbr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:29:03 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:29:07 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_moves(t_stacks *stacks)
{
	int			i;
	int			size;
	t_stack_a	*head_a;

	head_a = stacks->head_a;
	size = ft_listsize_a(stacks->head_a);
	i = 0;
	while (i++ < size)
	{
		get_top_stack_a(stacks, head_a, i - 1);
		if (head_a->content > stacks->values->max_b || \
			head_a->content < stacks->values->min_b)
			new_max_or_min_stack_b(stacks);
		else
			new_num_in_stack_b(stacks, head_a->content);
		check_double_moves(stacks);
		check_cost(stacks, i);
		head_a = head_a->next;
	}
}

void	check_cost(t_stacks *stacks, int i)
{
	stacks->moves->cost = stacks->moves->pb + stacks->moves->ra
		+ stacks->moves->rb + stacks->moves->rr + stacks->moves->rra
		+ stacks->moves->rrb + stacks->moves->rrr;
	if (i == 1 || (stacks->cheap->cost > stacks->moves->cost))
	{
		stacks->cheap->cost = stacks->moves->cost;
		stacks->cheap->pb = stacks->moves->pb;
		stacks->cheap->ra = stacks->moves->ra;
		stacks->cheap->rb = stacks->moves->rb;
		stacks->cheap->rr = stacks->moves->rr;
		stacks->cheap->rra = stacks->moves->rra;
		stacks->cheap->rrb = stacks->moves->rrb;
		stacks->cheap->rrr = stacks->moves->rrr;
	}
}

void	check_double_moves(t_stacks *stacks)
{
	stacks->moves->rr = 0;
	stacks->moves->rrr = 0;
	while (stacks->moves->ra != 0 && stacks->moves->rb != 0)
	{
		stacks->moves->ra--;
		stacks->moves->rb--;
		stacks->moves->rr++;
	}
	while (stacks->moves->rra != 0 && stacks->moves->rrb != 0)
	{
		stacks->moves->rra--;
		stacks->moves->rrb--;
		stacks->moves->rrr++;
	}
}

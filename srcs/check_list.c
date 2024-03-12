/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:27:11 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:27:13 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_list_order(t_stacks *stacks)
{
	t_stack_a	*head_a;
	int			num;
	int			i;

	i = 1;
	head_a = stacks->head_a;
	num = head_a->content;
	while (i++ < ft_listsize_a(stacks->head_a))
	{
		head_a = head_a->next;
		if (num > head_a->content)
			return (0);
		num = head_a->content;
	}
	ft_clearnodes_a(&stacks->head_a);
	exit(0);
}

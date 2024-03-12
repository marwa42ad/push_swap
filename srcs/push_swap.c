/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwamostafa <marwamostafa@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:31:47 by msayed            #+#    #+#             */
/*   Updated: 2024/01/30 16:09:55 by marwamostaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_join_args(char **av)
{
	char	*tmp;
	char	*str;
	char	**matrix;
	int		i;

	i = 1;
	tmp = ft_strjoin(av[i++], " ");
	while (av[i])
	{
		str = ft_strjoin(tmp, av[i]);
		free(tmp);
		tmp = ft_strjoin(str, " ");
		free(str);
		i++;
	}
	matrix = ft_split(tmp, ' ');
	free(tmp);
	return (matrix);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	input_error(argc, argv);
	stacks.head_a = create_list_a(argc, argv);
	stacks.head_b = NULL;
	check_for_doubles(stacks.head_a);
	sorting(&stacks);
	free_for_all(&stacks);
}

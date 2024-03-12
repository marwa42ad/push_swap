/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:21:31 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:21:36 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[c] == s2[c] && c < (n - 1) && s1[c] != '\0' && s2[c] != '\0')
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
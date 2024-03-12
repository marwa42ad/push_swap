/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:18:12 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:18:15 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			c;
	unsigned char	*s1_chr;
	unsigned char	*s2_chr;

	if (n <= 0)
		return (0);
	s1_chr = (unsigned char *)s1;
	s2_chr = (unsigned char *)s2;
	c = 0;
	while (c < n)
	{
		if (s1_chr[c] != s2_chr[c])
			return (s1_chr[c] - s2_chr[c]);
		else
			c++;
	}
	return (0);
}

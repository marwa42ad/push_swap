/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:18:37 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:18:41 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*char_dest;
	unsigned char	*char_src;
	size_t			i;

	if (dest == NULL)
		return (NULL);
	char_src = (unsigned char *)src;
	char_dest = (unsigned char *)dest;
	i = 1;
	if (dest > src)
	{
		while (i <= n)
		{
			char_dest[n - i] = char_src[n - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

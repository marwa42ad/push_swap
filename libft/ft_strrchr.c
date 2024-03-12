/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:21:55 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:21:58 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen((char *)s);
	ch = (unsigned char)c;
	if (s[i] == '\0' && ch == '\0')
		return ((char *)&s[i]);
	else
	{
		i--;
		while (i >= 0)
		{
			if (s[i] == ch)
				return ((char *)&s[i]);
			i--;
		}
	}
	return (NULL);
}

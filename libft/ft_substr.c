/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:22:24 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:22:29 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	if (start > str_len)
		return (ft_strdup(""));
	if (str_len - start >= len)
		dest = (char *)malloc((len + 1) * sizeof(char));
	else
		dest = (char *)malloc((str_len - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, (s + start), (len + 1));
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_outs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayed <msayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:23:59 by msayed            #+#    #+#             */
/*   Updated: 2024/01/28 08:24:03 by msayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putint(int num)
{
	int		i;
	long	nb;

	nb = num;
	i = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		i += 1;
	}
	if (nb > 9)
		i += ft_putint(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
	return (i);
}

int	ft_unsign(unsigned int nb)
{
	int	count;

	count = 1;
	if (nb > 9)
		count += ft_putint(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
	return (count);
}

int	ft_puthexlow(const char *str, int i, unsigned int num)
{
	int	count;

	count = 1;
	if (i != 0 && num != 0 && (str[i - 1] == '#'))
		count += ft_putstr("0x");
	if (num > 15)
		count += ft_puthexlow(str, 0, num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
	return (count);
}

int	ft_puthexupper(const char *str, int i, unsigned int num)
{
	int	count;

	count = 1;
	if (i != 0 && num != 0 && (str[i - 1] == '#'))
		count += ft_putstr("0X");
	if (num > 15)
		count += ft_puthexupper(str, 0, num / 16);
	write(1, &"0123456789ABCDEF"[num % 16], 1);
	return (count);
}

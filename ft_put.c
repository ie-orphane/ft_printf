/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:00:38 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/12 11:18:39 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int *count, const char c)
{
	write(1, &c, 1);
	(*count) += 1;
}

void	ft_putstr(int *count, const char *s)
{
	if (s)
	{
		while (*s)
		{
			write(1, s++, 1);
			(*count) += 1;
		}
	}
}

void	ft_putnbr(int *count, long n)
{
	if (n < 0)
	{
		ft_putchar(count, '-');
		ft_putnbr(count, -n);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(count, n / 10);
		ft_putchar(count, n % 10 + '0');
	}
}

char	ft_to(const char x, char c)
{
	if (65 <= c && c <= 90 && x == 'x')
		c += 32;
	else if (97 <= c && c <= 122 && x == 'X')
		c -= 32;
	return (c);
}

void	ft_puthex(int *count, unsigned long n, const char x)
{
	if (n >= 16)
		ft_puthex(count, n / 16, x);
	ft_putchar(count, ft_to(x, "0123456789abcdef"[n % 16]));
}

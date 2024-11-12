/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:00:38 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/11 17:40:52 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(const char c)
{
	write(1, &c, 1);
}

void    ft_putstr(const char *s)
{
	if (s)
	{
		while (*s)
			write(1, s++, 1);
	}
}

void    ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void    ft_puthex(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_puthex(-n);
	}
	else
	{
		if (n >= 16)
			ft_puthex(n / 16);
		ft_putchar("0123456789abcdef"[n % 10]);
	}
}

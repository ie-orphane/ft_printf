/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:35:16 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/12 11:18:22 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversions(va_list args, char conv, int *count)
{
	if (conv == '%')
		ft_putchar(count, '%');
	else if (conv == 'c')
		ft_putchar(count, va_arg(args, int));
	else if (conv == 's')
		ft_putstr(count, va_arg(args, char *));
	else if (conv == 'x' || conv == 'X')
		ft_puthex(count, va_arg(args, unsigned long), conv);
	else if (conv == 'p')
	{
		ft_putstr(count, "0x");
		ft_puthex(count, (unsigned long)va_arg(args, void *), 'x');
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			ft_conversions(args, *(format + 1), &count);
			format++;
		}
		else
			ft_putchar(&count, *format);
		format++;
	}
	va_end(args);
	return (count);
}

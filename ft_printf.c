/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:35:16 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/11 17:44:57 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
				ft_putchar('%');
			else if (*(format + 1) == 'c')
			{
				ft_putchar(va_arg(args, int));
			}
			else if (*(format + 1) == 's')
			{
				ft_putstr(va_arg(args, char *));
			}
			format++;
		}
		else
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return 0;
}

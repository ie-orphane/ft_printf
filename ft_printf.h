/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:37:50 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/12 11:23:03 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar(int *count, const char c);
void	ft_putstr(int *count, const char *s);
void	ft_putnbr(int *count, long n);
void	ft_puthex(int *count, unsigned long n, const char x);

int		ft_printf(const char *format, ...);

#endif

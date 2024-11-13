/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:37:50 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/13 10:24:14 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# include <stdio.h>
# include <string.h>
# include <limits.h>

void	ft_putchar(int *count, const char c);
void	ft_putstr(int *count, const char *s);
void	ft_putnbr(int *count, long n);
void	ft_puthex(int *count, unsigned long n, const char x);
void	ft_putunbr(int *count, unsigned long n);
char	*ft_strchr(const char *s, int c);

int		ft_printf(const char *format, ...);

#endif

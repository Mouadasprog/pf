/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:42:19 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/19 08:24:47 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_putnbr_d(int n);
int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(const char    *str);
int ft_putnbr_i(int n);
int ft_putnbr_u(unsigned int    n);
int ft_putnbr_x(unsigned int    n);
int ft_put_pointer(void *ptr);
int ft_put_percent(void);
int ft_putnbr_base(int  n,int   base,char   *digits);

#endif

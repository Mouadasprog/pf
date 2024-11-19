/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:33:50 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/19 08:24:45 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    const char *ptr;

    va_start(args, format);

    ptr = format;
    while (*ptr)
    {
        if (*ptr == '%' && *(ptr + 1))
        {
            ptr++;
            if (*ptr == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (*ptr == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (*ptr == 'd' || *ptr == 'i')
                count += ft_putnbr_d(va_arg(args, int));
            else if (*ptr == 'u')
                count += ft_putnbr_u(va_arg(args, unsigned int));
            else if (*ptr == 'x')
                count += ft_putnbr_x(va_arg(args, unsigned int));
            else if (*ptr == 'X')
                count += ft_putnbr_x(va_arg(args, unsigned int));
            else if (*ptr == 'p')
                count += ft_put_pointer(va_arg(args, void *));
            else if (*ptr == '%')
                count += ft_putchar('%');
        }
        else
        {
            count += ft_putchar(*ptr);
        }
        ptr++;
    }

    va_end(args);
    return count;
}
int main(void)
{
    int age = 4;
    ft_printf("hello mouad this is %d\n",age);
}
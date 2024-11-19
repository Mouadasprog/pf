/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:03:28 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:18 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_x(unsigned int    n)
{
    int count;
    char    *hex_digits;

    hex_digits = "0123456789abcdef";
    count = 0;

    if(n >= 16)
    {
        count += ft_putnbr_x(n / 16);
    }
    count += ft_putchar(hex_digits[n % 16]);
    return (count);
}
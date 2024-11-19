/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:09:15 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:07 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(unsigned int  n)
{
    int count;
    char    *hex_digits;

    count = 0;
    hex_digits = "0123456789ABCDEF";

    if(n >= 16)
    {
        count += ft_putnbr_hex(n / 16);
    }
    count += ft_putchar(hex_digits[n % 16]);
    return (count);
}
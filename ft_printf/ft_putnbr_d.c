/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:11:56 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/19 08:12:09 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_d(int n)
{
    int count;
    
    count = 0;
    
    if(n == -2147483648)
    {
        count += ft_putstr("-2147483648");
        return (count);
    }
    if(n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if(n >= 10)
    {
        count += ft_putnbr_d(n / 10);
    }
    count += ft_putchar((n % 10) + '0');
    return (count);
}
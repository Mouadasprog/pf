/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:58:46 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:11 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_i(int n)
{
    int count;
    
    count = 0;
    
    if(n == -2147483648)
    {
        count += ft_putstr("-2147483648");
    }
    if(n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if(n >= 10)
    {
        count += ft_putnbr_i(n / 10);
    }
    count += ft_putchar((n % 10) + '0');
    return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:00:00 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:14 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_u(unsigned int    n)
{
    int count;

    count = 0;
    if(n >= 10)
    {
        count += ft_putnbr_u(n / 10);
    }
    count += ft_putchar((n % 10) + '0');
    return (count);
}
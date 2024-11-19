/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:47:52 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:28 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(const char    *str)
{
    int count;

    if(!str)
    {
        return(ft_putstr("(null)"));
    }
    count = 0;
    while(str[count])
    {
        ft_putchar(str[count]);
        count++;
    }
    return (count);
}
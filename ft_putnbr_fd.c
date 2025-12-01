/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinbobw.co <marvinbobw.co@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:08:13 by marvinbobw.       #+#    #+#             */
/*   Updated: 2025/12/01 23:43:49 by marvinbobw.      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnubr_fd(int n, int fd)
{
    long int    l;

    l = n;
    if (l < 0)
    {
        ft_putchar_fd('-', fd);
        l =* -1;
    }
    if (l > 9)
        ft_putnbr_fd(l / 10, fd);
    ft_putchar_fd(l % 10 + '0', fd);
}

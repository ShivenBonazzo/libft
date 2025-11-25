/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:06:38 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 21:06:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memchr(const void *str, int c, size_t n)
{
    const unsigned char *s;

    s = str;
    while (n > 0)
    {
        if (*s == (unsigned char)c)
            return ((void *)s);
        s++;
        n--;
    }
    return (NULL);
}
 
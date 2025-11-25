/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:41:50 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 20:41:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(char *str, int c)
{
    char    *last;

    last = NULL;
    while (*str)
    {
        if (*(unsigned char *)str == (unsigned char)c)
            last = ((char *)str);
        str++;
    }
    if (*(unsigned char *)str == (unsigned char)c)
        return ((char *)str);
    return (last);
}

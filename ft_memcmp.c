/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:37:39 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 21:37:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;

    p1 = str1;
    p2 = str2;
    while (n--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return (0);
}

/*
compares n bytes of two memory blocks
*/

int main()
{
	char a[] = "Peace\0Hello";
	char b[] = "Peace\0MyBrodha";
	int result = ft_memcmp(a, b, 6);
	int result2 = ft_memcmp(a, b, 13);
	printf("%i\n", result);
	printf("%i\n", result2);
}

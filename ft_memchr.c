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

void	*memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;

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

/*
finds first occurrence of a byte in a memory block
can search past '\0'
it searches raw bytes.
*/

/*
int main()
{
    char *c;
    char *i;
    c = (char *)memchr("ciao come stai", 'e', 10);
    i = (char *)memchr("ciao come stai", 'e', 6);
    
    printf("%s", c);
    printf("\n");
    printf("%s", i);
}
*/
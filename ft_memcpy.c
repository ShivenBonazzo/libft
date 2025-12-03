/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:23:12 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 10:46:51 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

/*
copies bytes from source to destination (no overlap allowed)
*/

/*
int main()
{
	char *c;
	char a[] = "ciao";
	char b[] = "C";
	c = (char *)ft_memcpy(a, b, 1);
	printf("%s\n", c);
}
*/
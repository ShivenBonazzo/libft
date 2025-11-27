/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:46:00 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/27 11:34:51 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n-- > 0)
		*p++ = (unsigned char) c;
	return (str);
}

/*
fills a block of memory with a specific byte value
*/

/*
int main()
{
	char buffer[10];
	memset(buffer, 'A', 10);
	printf("%s", buffer);
}
*/
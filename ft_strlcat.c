/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:03:13 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 21:33:27 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	sum;

	i = 0;
	sum = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		sum = dest_len + src_len;
	else
		return (src_len + size);
	while (src[i] && (dest_len + 1) < size)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (sum);
}

/* 
safely concatenates strings with size limit
 */

/* int main()
{
	char dst[20] = "Hello";
	ft_strlcat(dst, " my Brotha", 13);
	printf("%s\n", dst);
} */

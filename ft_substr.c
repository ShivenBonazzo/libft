/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:49:57 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/28 12:35:34 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_size;

	if (!s)
		return (NULL);
	str_size = ft_strlen(s);
	if (str_size < start)
	{
		substr = (char *)malloc(sizeof(char) * 1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > str_size - start)
		len = str_size - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/* 
extracts a substring from a string starting at a specific position
substring of n len.
*/

/* int main()
{
	char *s = "Hello World";

	printf("%s\n", ft_substr(s, 0, 5));
	printf("%s\n", ft_substr(s, 6, 5));
	printf("%s\n", ft_substr(s, 0, 20));
	printf("%s\n", ft_substr(s, 15, 5));
	printf("%s\n", ft_substr("42", 0, 1));
} */

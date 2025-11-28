/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:58:28 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/28 15:14:10 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = len - 1;
	while (end > start && is_set(s1[end], set))
		end--;
	len = end - start + 1;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}

/*
allocates memory using malloc and returns a copy of s1
with character from 'set' removed from beginning and at the end
*/

/* int main()
{
	printf("%s\n", ft_strtrim("      Hello   ", " "));
	printf("%s\n", ft_strtrim("abcHelloabcabcacccccaaa", "abc"));
	printf("%s\n", ft_strtrim("abcHelloabca", "a"));
	printf("%s\n", ft_strtrim("aaaAa", "a"));
	printf("%s\n", ft_strtrim("aaaaaaaaaaaa", "a"));
} */

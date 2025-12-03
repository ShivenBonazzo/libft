/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:36:23 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 21:23:28 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*concat;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concat)
		return (NULL);
	ft_memcpy(concat, s1, len1);
	ft_memcpy(concat + len1, s2, len2);
	concat[len1 + len2] = '\0';
	return (concat);
}

/*
allocates memory using malloc and return a new string
which is the result of concatenating s1 and s2.
*/

/* int main()
{
	printf("%s\n", ft_strjoin("Hello", " World"));
	printf("%s\n", ft_strjoin("", ""));
	printf("%s\n", ft_strjoin("Hello", ""));
	printf("%s\n", ft_strjoin("", "World"));
	printf("%s\n", ft_strjoin(NULL, "YoWassapDawg"));
	printf("%s\n", ft_strjoin("That's how we do it", NULL));
} */

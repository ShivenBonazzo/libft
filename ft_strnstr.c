/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:30:12 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/28 09:46:05 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] != '\0'
			&& big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			++j;
		}
		++i;
	}
	return (NULL);
}

/*
finds first occurrence of substring within n characters
*/

/* int main()
{
	char str[] = "Wassap my Dawg, that's how we do it";
	char *ptr = ft_strnstr(str, "Dawg", 5);
	char *ptr2 = ft_strnstr(str, "Dawg", 14);
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
} */

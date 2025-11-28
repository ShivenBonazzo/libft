/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:35:07 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/28 17:04:45 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

/*
applies the function f to each character of the string s
passing its index as the first argument and the character
itself as the second. A new string is created using malloc
to store the results from the successive applications of f.
*/

/* static char scream(unsigned int index, char c)
{
	unsigned int i = index;
	i = 65;
	return (c = i);
}
int main()
{
	const char *original_string = "originale";
	char *screaming = ft_strmapi(original_string, &scream);
	printf("Stringa originale: %s\n", original_string);
	printf("Nuova stringa: %s\n", screaming);
	free(screaming);
	return 0;
} */

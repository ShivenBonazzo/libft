/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:48:00 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 12:25:50 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if (*(unsigned char *)str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}

/*
finds first occurrence of a character in a string
it stops with the term '\0'
*/

/* int main()
{
	char str[] = "Yo Wassap my Dawg";
	char *ptr = strchr(str, 'W');
	printf("%s\n", ptr);
} */

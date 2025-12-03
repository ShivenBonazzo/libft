/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:14:11 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 11:13:48 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
sets a block of memory to zero.
*/

/* int main()
{
	char *str = malloc(sizeof(char) * 10);
	char str2[] = "ciao come stai";
	ft_bzero(str, 10);
	ft_bzero(str2, 4);
	printf("%s\n", str);
	printf("%s\n", str2 + 4);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:14:11 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/26 22:42:30 by marvin           ###   ########.fr       */
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
int main()
{
	char *str = malloc(sizeof(char) * 10);
	char str2[] = "ciao comes stai";
	ft_bzero(str, 10);
	ft_bzero(str2, 4);
	printf("%s", str);
	printf("%s", str2);
}
*/
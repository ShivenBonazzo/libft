/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:48:00 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/24 20:24:35 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			last == ((char *)str);
		str++;
	}
	if (*(unsigned char *)str == (unsigned char)c)
		return ((char *)str);
	return (last);
}

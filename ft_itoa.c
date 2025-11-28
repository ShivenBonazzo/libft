/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:54:59 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/28 16:32:45 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_decimal_places(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*mount_str(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	l;

	l = n;
	i = ft_decimal_places(l);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (mount_str(str, l, i));
}

/*
Allocates memory using malloc and returns a string
representing the integer received as an argument.
Handles also negative numbers
*/

/* int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-2147483647));
} */

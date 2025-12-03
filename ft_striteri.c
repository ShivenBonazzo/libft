/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:51:43 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 13:02:19 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* Applies the function 'f' to each character of the string passed
as argument, passing its index as the first argument. Each character
is passed by addrress to 'f' so it can be modified if necessary */

/* static void character(unsigned int index, char *s)
{
	if (*s >= 'a' && *s < 'z')
		(*s)++;
	else if (*s == 'z')
		*s = 'a';
	(void)index;
}	

int main()
{
	char s[] = "ciao come {}{}stai";

	ft_striteri(s, character);
	printf("%s\n", s);
} */
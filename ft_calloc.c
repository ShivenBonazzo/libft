/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:24:27 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/02 18:50:34 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	void			*res;
	unsigned char	*temp;

	i = 0;
	res = malloc(size * nitems);
	if (!res)
		return (NULL);
	temp = (unsigned char *)res;
	while (i < size * nitems)
	{
		temp[i] = 0;
		i ++;
	}
	return ((void *)res);
}

/*
allocates memory and intializes all bytes to zero
*/

/* int main()
{
	int *arr = (int *)ft_calloc(5, sizeof(int));
	printf("%i%i%i%i%i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
} */

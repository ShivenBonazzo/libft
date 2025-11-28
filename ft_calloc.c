/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:24:27 by rarriola          #+#    #+#             */
/*   Updated: 2025/11/28 09:51:01 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	sum;
	void	*p;

	sum = nitems * size;
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}

/*
allocates memory and intializes all bytes to zero
*/

/* int main()
{
	int *arr = (int *)ft_calloc(5, sizeof(int));
	printf("%i%i%i%i%i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
} */

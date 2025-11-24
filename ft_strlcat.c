/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:03:13 by rarriola          #+#    #+#             */
/*   Updated: 2025/10/22 18:20:44 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	c = 0;
	d = 0;
	s = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size == 0 || size <= d)
		return (size + s);
	i = d;
	while (src[c] && i < size - 1)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (d + s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:05:41 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/04 10:15:02 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
counts the number of nodes in the list
*/

/* int main(void)
{
	t_list *first_node = ft_lstnew("primo");
	t_list *second_node = ft_lstnew("secondo");

	first_node->next = second_node;

	printf("%d\n", ft_lstsize(first_node));

	free(first_node);
	free(second_node);
} */
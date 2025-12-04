/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:11:24 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/04 10:20:11 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
returns the last node of the list.
*/

/* int main (void)
{
	t_list *first_node = ft_lstnew("primo");
	t_list *second_node = ft_lstnew("secondo ed ultimo");

	first_node->next = second_node;
	t_list *last_node = ft_lstlast(first_node);
	printf("ultimo elemento: %s\n", (char *)last_node->content);

	free(first_node);
	free(second_node);
} */

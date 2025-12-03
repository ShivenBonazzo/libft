/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:51:13 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 22:29:31 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node ->content = content;
	node ->next = NULL;
	return (node);
}

/*
allocates memory using malloc and returns a new node
'content' initialized with the given parameter 'content'.
'next' is initialized to NULL.
*/

/* int main()
{
	t_list *new_node = ft_lstnew("ciao");

	if (new_node != NULL)
		printf("contenuto del new node: %s\n", (char *)new_node->content);
	else
		printf("Error\n");
	free(new_node);
} */
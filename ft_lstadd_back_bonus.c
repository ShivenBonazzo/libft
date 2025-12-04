/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:19:23 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/04 10:29:48 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		curr = *lst;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
	}
}

/*
adds the node 'new' at the end of the list
*/

/* int main(void)
{
	t_list *first_node = ft_lstnew("primo");
	t_list *second_node = ft_lstnew("secondo");
	t_list *my_list = first_node;

	printf("lista originale:\n");
	while (my_list != NULL)
	{
		printf("%s -> ", (char *)my_list->content);
		my_list = my_list->next;
	}
	printf("NULL\n");

	t_list *new_node = ft_lstnew("terzo aggiunto");

	ft_lstadd_back(&first_node, second_node);
	ft_lstadd_back(&first_node, new_node);

	printf("\nLista dopo l'aggiunta dei nuovi nodi:\n");
	my_list = first_node;
	while (my_list != NULL)
	{
		printf("%s -> ", (char *)my_list->content);
		my_list = my_list->next;
	}
	printf("NULL\n");

	my_list = first_node;
	while (my_list != NULL)
	{
		t_list *temp = my_list;
		my_list = my_list->next;
		free(temp);
	}
} */
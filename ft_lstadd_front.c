/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:58:10 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 22:58:33 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
adds the node 'new' at the beginning of the list.
*/

/* int main(void)
{
	t_list *first_node = ft_lstnew("primo");
	t_list *my_list = first_node;

	printf("original list:\n");
	while (my_list != NULL)
	{
		printf("%s ->", (char *)my_list->content);
		my_list = my_list->next;
	}
	printf("NULL\n");

	t_list *second_node = ft_lstnew("secondo");
	t_list *third_node = ft_lstnew("terzo");
	
	ft_lstadd_front(&first_node, second_node);
	ft_lstadd_front(&first_node, third_node);

	printf("\nLista dopo i nuovi nodi:\n");
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:04:38 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/03 23:22:16 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}

/*
deletes and frees the given node and all its successors,
using the function 'del' and free.
finally, set the pointer to the list to NULL.
*/

/* void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list *nodo1 = ft_lstnew(ft_strdup("Nodo1"));

	t_list *nuova_lista = NULL;

	ft_lstadd_front(&nuova_lista, nodo1);
	printf("Lista:\n");
	t_list *lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}

	ft_lstclear(&nuova_lista, ft_del);

	printf("Lista dopo:\n");
	lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	if (lista == NULL)
		printf("lista vuota\n");
} */

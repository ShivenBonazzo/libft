/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:15:00 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/04 10:45:45 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/*
iterates through the list 'lst' and applies the
function 'f' to the content of each node
*/

/* void	ft_print_function(void *content)
{
	printf("contenuto: %s\n", (char *)content);
}

int main(void)
{
	t_list *nodo1 = ft_lstnew("primo");
	t_list *nodo2 = ft_lstnew("secondo");

	t_list *nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);

	ft_lstiter(nuova_lista, ft_print_function);
	free(nodo1);
	free(nodo2);
} */
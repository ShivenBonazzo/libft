/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:29:44 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/04 10:42:03 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*
takes a node as parameter and frees its content
using the function 'del'. Free the node itself but
does NOT free the next node.
*/

/* void	del(void *content)
{
	free (content);
}

int	main(void)
{
	t_list *lista = NULL;

	char *str1 = ft_strdup("elemento");

	t_list *nodo_uno = ft_lstnew(str1);

	ft_lstadd_back(&lista, nodo_uno);

	printf("%s\n", (char *)lista->content);
	ft_lstdelone(nodo_uno, del);
	printf("%score dumped perche' vuoto\n", (char *)nodo_uno->content);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarriola <rarriola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:22:36 by rarriola          #+#    #+#             */
/*   Updated: 2025/12/04 10:54:04 by rarriola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*
iterates through the list 'lst', applies the function 'f' to each node's content,
and creates a new list resulting of the applications of
the function 'f'. the 'del' function is used to delete the content of a node
if needed.
*/

/* void	*ft_tomap_function(void *content)
{
	char *original = (char *)content;
	char *duplicate = ft_strdup(original);
	return ((void *)duplicate);
}

void ft_del(void *content)
{
	free(content);
}

int main(void)
{
	char *str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (1);
	str[0] = 'a';
	str[1] = '\0';
	t_list *nodo = ft_lstnew(str);
	if (!nodo)
	{
		free(str);
		return (1);
	}
	t_list *map = ft_lstmap(nodo, &ft_tomap_function, ft_del);
	printf("%s\n", (char *)nodo->content);
	printf("%s\n", (char *)map->content);
	ft_lstclear(&map, &ft_del);
	ft_lstclear(&nodo, &ft_del);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:03:41 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/08 18:10:44 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* 
*************************************************************************
DESCRIPTION
creates a node with initialize content and a NULL next pointer.
*************************************************************************
RETURN
new node || NULL (allocate failed)
*************************************************************************
EXPLANATION
	new = (t_list *)malloc(sizeof(t_list)); // allocate new node
	new->content = content; // put in content
	new->next = NULL; // join NULL to new node
*************************************************************************
ARROW OPERATOR AND INDIRECTION OPERATOR
	new->content is equivalent to (*new).content
 */
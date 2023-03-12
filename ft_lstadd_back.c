/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:53:19 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/12 14:24:27 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}
/*
*************************************************************************
DESCRIPTION
add new node at the end of the list
*************************************************************************
RETURN
none
*************************************************************************
EXPLANATION
{
	// If list is empty, point head to new node
	if (!*lst)
	{
		*lst = new;
		return ;
	}

	// Otherwise, find last node
	current = *lst;
	while (current->next)
		current = current->next;

	// join new node to last node
	current->next = new;
}
 */

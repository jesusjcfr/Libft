/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:06:37 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:06:47 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main() 
{
    // Create some test content
    char *content1 = "World";
    char *content2 = "Hello";

    // Create two nodes
    t_list *node1 = ft_lstnew((void *)content1);
    t_list *node2 = ft_lstnew((void *)content2);

    // Create a list with one node
    t_list *head = node1;

    // Add the second node to the front of the list
    ft_lstadd_front(&head, node2);

    // Print the list content
    t_list *current = head;
    while (current != NULL) 
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:09:59 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:10:03 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main() 
{
    char *content1 = "Node 1";
    char *content2 = "Node 2";
    char *content3 = "Node 3";

    t_list *node1 = ft_lstnew((void *)content1);
    t_list *node2 = ft_lstnew((void *)content2);
    t_list *node3 = ft_lstnew((void *)content3);

    t_list *head = node1;
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    int size = ft_lstsize(head);
    printf("List size: %d\n", size);
    free(node1);
    free(node2);
    free(node3);
    return (0);
}
*/

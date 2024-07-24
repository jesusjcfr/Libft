/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:09:36 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:09:40 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main()
{
	char	*content = "Hello, world!";
    
    // Call ft_lstnew to create a new node
    t_list	*node = ft_lstnew((void *)content);
    
    // Check if the node was created successfully
    if (node == NULL) 
	{
        printf("Failed to create a new node.\n");
        return (1); // Exit with an error code
    }
    
    // Print the content of the new node
    printf("Node content: %s\n", (char *)node->content);
    
    // Free the allocated memory
    free(node);
    
    return (0); // Exit with success
}
*/

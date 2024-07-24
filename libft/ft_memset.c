/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:14:27 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:14:41 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int	main() 
{ 
	char *str = NULL;	
	printf("Before ft_memset(): %s\n", str);
	//fill 3 bytes with * starting from str[4]
	ft_memset(str + 4, '*', 3);
	printf("After ft_memset): %s\n", str);
       	//fill 3 bytes with a starting from str[4]
	memset(str + 4, 'a', 3);  
	printf("After memset(): %s\n", str);
	return (0); 
}*/

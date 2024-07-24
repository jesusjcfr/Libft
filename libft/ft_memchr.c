/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:10:30 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:10:48 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char )c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int main () 
{
   const char str[] = "Raya2111";
   const char ch = '2';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("after memchr |%c| is - |%s|\n", ch, ret);

   ret = ft_memchr(str, ch, strlen(str));

   printf("after ft_memchr |%c| is - |%s|\n", ch, ret);
   return(0);
}
*/

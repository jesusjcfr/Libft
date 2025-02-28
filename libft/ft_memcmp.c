/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:11:10 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:11:15 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
int main ()
{
   char *str1;
   char *str2;
   int rslt;
   int ctrl;


   str1 = strdup("RAYA");
   str2 = strdup("RAYA");

   ctrl = memcmp(str1, str2, 6);
   rslt = ft_memcmp(str1, str2, 6);
   
   printf("ctrl : %d\n", ctrl);
   printf("rslt : %d\n", rslt);

   return(0);
}
*/

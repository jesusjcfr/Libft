/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:26:20 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:26:26 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	b = 0;
	while ((big)[b] != '\0' && b < len)
	{
		l = 0;
		while ((little)[l] && (big)[b + l] &&
			(big)[b + l] == (little)[l] &&
			(b + l) < len)
			l++;
		if ((little)[l] == '\0')
			return (&((char *)big)[b]);
		b++;
	}
	return (NULL);
}
/*
int	main()
{
	const char *largestring = "Hello World";
	const char *smallstring = NULL;
	char *ptr;
	
	ptr = ft_strnstr(largestring, smallstring, 6);
	if (ptr)
		printf("ft_strnstr: %s\n", ptr);
	else
		printf("not found\n");
	return (0);
}*/

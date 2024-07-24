/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:24:28 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:24:34 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)src);
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main() 
{
    char dst[3];
    const char *src = "Hols";
    
    size_t result = ft_strlcpy(dst, src, sizeof(dst));
    
    printf("Copied string: %s\n", dst);
    printf("Length of source string: %zu\n", result);
    
    return 0;
}*/

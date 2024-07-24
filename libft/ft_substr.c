/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:28:04 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:28:25 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < (size_t)start || !len)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[i + start])
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
}
/*
int	main()
{
	char *result = ft_substr("HELLOWORLD", 5, 0);
	if (result)
	{
		printf("%s\n", result);
		free (result);
	}
	else 
		printf("Sub failed\n");
	return (0);
}*/

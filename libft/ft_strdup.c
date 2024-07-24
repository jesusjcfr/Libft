/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:21:53 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:22:17 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*d;

	i = 0;
	len = ft_strlen(s);
	d = ft_calloc(len + 1, 1);
	if (!d)
		return (NULL);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int	main()
{
	const char	dst[] = "12334*6ybki0";
	char	*result;
	char	*mine;
	result = strdup(dst);
	printf("ctrl: %s\n", result);
	mine = ft_strdup(dst);
	printf("mine: %s\n", mine);
	free(result);
	free(mine);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:25:05 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:25:22 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	to_func(unsigned int index, char c)
{
    (void)index;
	if (ft_isalpha(c))
		return (ft_toupper(c));
	else if (ft_isdigit(c))
		return ('*');
	return (c);
}

int	main(void)
{
	const char	*test_str = "hellop213344raya87756 is the 780best";
	char	*result = ft_strmapi(test_str, to_func);

	if (result)
    {
		printf("Original: %s\n", test_str);
		printf("Transformed: %s\n", result);
		free(result);
    }
	else
        printf("Memory allocation failed!\n");
    return (0);
}
*/

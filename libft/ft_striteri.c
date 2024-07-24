/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:22:50 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:23:10 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	to_func(unsigned int i, char *c)
{
	(void)i;
	if (ft_isdigit(*c))
		*c = '@';
	else if (ft_isalpha(*c))
		*c = ft_toupper(*c);
}

int main(void)
{
    char str[] = "hello world1234687&&*";

    printf("Original string: %s\n", str);
    ft_striteri(str, to_func);
    printf("Modified string: %s\n", str);
    return (0);
}*/

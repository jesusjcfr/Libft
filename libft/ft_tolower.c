/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:28:40 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:28:48 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	
	c = argv[1][0];
	c = tolower(c);
	printf("Tolower is: %c\n", tolower(c));
	c = ft_tolower(c);
	printf("My function: %c\n", ft_tolower(c));
	return 0;
}
*/

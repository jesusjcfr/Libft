/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:29:00 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:29:04 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	
	c = argv[1][0];
	c = toupper(c);
	printf("Toupper is: %c\n", toupper(c));
	c = ft_toupper(c);
	printf("My function: %c\n", ft_toupper(c));
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:04:21 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:04:26 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2084);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	c = argv[1][0];
	printf("myfunction: %d\n", ft_isdigit(c));
	printf("isdigit: %d\n", isdigit(c));
	return (0);
}
*/

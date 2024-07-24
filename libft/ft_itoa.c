/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:05:04 by jfermin           #+#    #+#             */
/*   Updated: 2024/07/24 14:05:09 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*narray;
	long	num;
	size_t	len;
	int		i;

	num = n;
	len = ft_nlen(num);
	if (num == 0)
		return (ft_strdup("0"));
	narray = (char *)malloc((len + 1) * sizeof(char));
	if (!narray)
		return (NULL);
	narray[len] = '\0';
	if (num < 0)
	{
		narray[0] = '-';
		num = -num;
	}
	i = len - 1;
	while (num)
	{
		narray[i--] = (num % 10) + '0';
		num = num / 10;
	}
	return (narray);
}
/*
int main()
{
	int n;
	char *result;
	
	n = -2147483648;
	result = ft_itoa(n);
	printf("|%s|\n", result);
	return (0);
}
*/

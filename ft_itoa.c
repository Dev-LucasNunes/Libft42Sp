/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:43:16 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/12 18:13:55 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	store_digits(char *str, long int n, int digits)
{
	int	i;

	i = digits - 1;
	if (n == 0)
	{
		str[i] = '0';
		return ;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;

	digits = count_digits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	store_digits(str, n, digits);
	str[digits] = '\0';
	return (str);
}

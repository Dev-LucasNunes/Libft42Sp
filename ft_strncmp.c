/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 07:53:53 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/08 11:20:01 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	i = 0;
	x = (unsigned char *) s1;
	y = (unsigned char *) s2;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (x[i] != y[i])
		{
			return (x[i] - y[i]);
		}
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	int teste;

// 	teste = ft_strncmp("test\200", "test\0", 6);
// 	printf("%d", teste);
// }
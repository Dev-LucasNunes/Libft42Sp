/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:20:13 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/12 19:00:42 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;
	size_t				i;

	p_s1 = s1;
	p_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (p_s1[i] > p_s2[i])
		{
			return (1);
		}
		else if (p_s1[i] < p_s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

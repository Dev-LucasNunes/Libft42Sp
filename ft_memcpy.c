/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:10:43 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/09 08:58:51 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	char	*p;
// 	size_t	i;

// 	p = src;
// 	i = 0;
// 	while (i < n)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	return (dest);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;
	size_t		i;

	p_dest = (char *)dest;
	p_src = src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	void *mem;
// 	mem = malloc(sizeof(*mem) * 30);
// 	ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:45 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/23 13:10:51 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*p_dest;
	unsigned const char		*p_src;
	size_t					i;

	p_dest = dest;
	p_src = src;
	i = 0;
	if ((src == NULL && dest == NULL) || src == dest)
		return (dest);
	if (p_dest <= p_src)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		p_dest[i - 1] = p_src[i - 1];
		i--;
	}
	return (dest);
}

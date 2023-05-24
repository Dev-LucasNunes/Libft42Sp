/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:34:16 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/24 08:28:17 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*str;
	size_t				i;

	str = NULL;
	if ((size * nmemb) / size != nmemb)
		return (NULL);
	if (nmemb * size == 0)
		return (malloc(0));
	str = (unsigned char *)malloc(nmemb * size * sizeof(unsigned char));
	if (!str)
	{
		return (NULL);
	}	
	i = 0;
	while (i < (nmemb * size))
	{
		str[i] = '\0';
		i++;
	}
	return ((void *)str);
}

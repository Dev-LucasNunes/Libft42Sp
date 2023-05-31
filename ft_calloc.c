/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:34:16 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/29 08:26:34 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*str;
	size_t			i;
	size_t			total;

	str = NULL;
	total = size * nmemb;
	if (total != 0 && total / size != nmemb)
		return (NULL);
	str = (unsigned char *)malloc(total * sizeof(unsigned char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < (total))
	{
		str[i] = '\0';
		i++;
	}
	return ((void *)str);
}

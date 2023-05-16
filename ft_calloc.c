/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:34:16 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/16 09:38:42 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*ptr;
// 	char	*char_ptr;
// 	size_t	i;

// 	ptr = malloc(nmemb * size);
// 	char_ptr = (char *)ptr;
// 	i = 0;
// 	if (ptr != NULL)
// 	{
// 		while (i < nmemb * size)
// 		{
// 			char_ptr[i] = 0;
// 			i++;
// 		}
// 	}
// 	return (ptr);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, nmemb * size);
	}
	return (ptr);
}

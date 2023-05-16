/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:35:11 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/12 10:54:59 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (dstsize <= dest_len)
	{
		return (dstsize + src_len);
	}
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < dstsize)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}

// int main() {
//     char dest[20] = "Hello, ";
//     const char src[] = "world!";

//     size_t result = strlcat(dest, src, sizeof(dest));

//     printf("String concatenada: %s\n", dest);
//     printf("Tamanho total: %zu\n", result);

//     return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:53:06 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/12 11:01:33 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// int main() {
//     char dest[20] = "Hello, ";
//     const char src[] = "world!";

//     size_t result = ft_strlcpy(dest, src, sizeof(dest));

//     printf("String concatenada: %s\n", dest);
//     printf("Tamanho total: %zu\n", result);

//     return 0;
// }

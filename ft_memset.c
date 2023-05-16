/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:59:47 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/08 11:04:52 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// int main() {
//     char str[20] = "Hello, World!";
// 	char c = 'a';  
//     printf("Antes: %s\n", str);  
//     ft_memset(str, c, sizeof(str));  
//     printf("Depois: %s\n", str);  
//     return 0;
// }
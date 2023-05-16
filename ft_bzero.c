/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:36 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/07 11:19:15 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_bzero(void *s, size_t n) 
// {
//     char *p;  
//     p = s; 
//     while (n > 0) 
//     {
//         n--;
//         *p = 0;
//         p++;
//     }
// }

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main() {
//     char str[20] = "Hello, World!";
//     printf("Antes: %s\n", str); 
//     ft_bzero(str, sizeof(str));
//     printf("Depois: %s\n", str);
//     return 0;
// }

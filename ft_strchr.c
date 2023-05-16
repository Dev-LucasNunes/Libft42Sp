/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:43:09 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/08 15:33:43 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i + j] == c && s[i + j] != '\0')
// 		{
// 			j++;
// 		}
// 		if (s[i] == c)
// 		{
// 			return ((char *)&s[i]);
// 		}
// 		i++;
// 		j = 0;
// 	}
// 	return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}	
	return (NULL);
}
// int main(void)
// {
// 	ft_strchr("banana macaco", n);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:44:18 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/07 16:06:19 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t	len;

// 	len = ft_strlen(s);
// 	while (len > 0)
// 	{
// 		if (s[len] == c)
// 		{
// 			return ((char *)&s[len]);
// 		}
// 		len--;
// 		if (s[len] == c)
// 		{
// 			return ((char *)&s[len]);
// 		}
// 	}
// 	if (c == '\0')
// 	{
// 		return (NULL);
// 	}	
// 	return (NULL);
// }

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}

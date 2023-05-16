/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:09:23 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/09 14:44:41 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	int				j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
	{
		return ((char *) big);
	}
	while (big[i] != '\0' && i < len)
	{
		while ((i + j < len) && big[i + j] == little[j] && big[i + j] != '\0')
		{
				j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// #include<stdio.h>
// int    main(void)
// {

//     printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// 	return (0);
// }
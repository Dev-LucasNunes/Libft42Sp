/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:29:23 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/08 12:07:16 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	size_t			len;
	char			*dup;

	len = ft_strlen (src) + 1;
	dup = (char *)malloc(len * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dup, src);
	return (dup);
}

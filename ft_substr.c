/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:01:20 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/16 09:45:49 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*pstr;
	char		*substr;
	size_t		i;
	size_t		j;

	pstr = s;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL || s == NULL || start >= ft_strlen(s))
		return (NULL);
	i = 0;
	j = 0;
	while (pstr[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = pstr[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

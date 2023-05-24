/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:01:20 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/24 10:15:47 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;
	size_t	i;
	char	*subst;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	size = s_len - start;
	i = 0;
	if (s == NULL || start >= s_len)
		return (ft_strdup(""));
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (subst == NULL)
		return (NULL);
	while (i < len)
	{
		subst[i] = s[start + i];
		i++;
	}
	subst[len] = '\0';
	return (subst);
}

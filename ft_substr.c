/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:01:20 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/18 12:24:14 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	const char	*pstr;
// 	char		*substr;
// 	size_t		size;
// 	size_t		i;
// 	size_t		j;

// 	size = strlen(s) - start;
// 	pstr = s;
// 	substr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (substr == NULL)
// 		return (NULL);
// 	if (start >= ft_strlen(s) || s == NULL)
// 		return (ft_strdup(""));
// 	if (size < len)
// 		len = size;
// 	i = 0;
// 	j = 0;
// 	while (pstr[i] != '\0')
// 	{
// 		if (i >= start && j < len)
// 			substr[j++] = pstr[i];
// 		i++;
// 	}
// 	substr[j] = '\0';
// 	return (substr);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;
	size_t	i;
	char	*subst;

	s_len = strlen(s);
	size = s_len - start;
	i = 0;
	if (s == NULL || start >= s_len)
		return (strdup(""));
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

// int    main(void)
// {
//     const char *str = "Hello, World!";
//     unsigned int start = 7;
//     size_t len = 5;
//     char *substr = ft_substr(str, start, len);
//     if (substr) {
//     printf("Substring: %s\n", substr);
//     free(substr);
//     } else {
//     printf("Erro ao criar a substring.\n");
//     }
//     return 0;
// }
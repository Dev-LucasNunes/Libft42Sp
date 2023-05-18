/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:33:30 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/16 12:26:39 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*substr;
// 	char	*start;
// 	char	*end;
// 	size_t	i;
// 	size_t	j;

// 	j = ft_strlen(s1);
// 	i = 0;
// 	substr = (char *)malloc(sizeof(char) * j + 1);
// 	if (substr == NULL)
// 	{
// 		return (NULL);
// 	}
// 	if (s1 == '\0' || set == '\0')
// 	{
// 		return (0);
// 	}
// 	while (s1[i] != '\0')
// 	{
// 		if (s1[i] == set[i])
// 		{
// 			start[i] = set[i];
// 		}
// 		i++;
// 	}
// 	while (j > 0)
// 	{
// 		if (s1[j] == set[j])
// 		{
// 			end[j] = set[j];
// 		}
// 		i--;
// 	}
// 	while (substr != '\0')
// 	{
// 		substr = 
// 	}	
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;

// 	if (!s1 || !set)
// 		return (NULL);
// 	while (*s1 && ft_strchr(set, *s1))
// 		s1++;
// 	i = ft_strlen(s1);
// 	while (i && ft_strchr(set, s1[i]))
// 		i--;
// 	return (ft_substr(s1, 0, i + 1));
// }

static int	ft_check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_check_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

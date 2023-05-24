/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:00:10 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/18 21:00:10 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if ((s[i + 1] == c) || (s[i + 1] == '\0'))
				count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_get_next_word(char const **s, char c)
{
	char	*word;
	int		length;
	int		i;
	int		j;

	length = 0;
	i = 0;
	while ((*s)[i] != '\0' && (*s)[i] == c)
		i++;
	while ((*s)[i + length] != '\0' && (*s)[i + length] != c)
		length++;
	word = (char *)malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < length)
	{
		word[j] = (*s)[i + j];
		j++;
	}
	word[j] = '\0';
	*s = *s + (i + length);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;

	if (s == NULL)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		result[i] = ft_get_next_word(&s, c);
		if (result[i] == NULL)
		{
			while (i > 0)
				free(result[--i]);
			free(result[i]);
			return (NULL);
		}
		i++;
	}
	result[word_count] = NULL;
	return (result);
}
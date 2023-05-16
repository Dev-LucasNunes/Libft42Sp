/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n < lgomes-n@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:15:07 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/05/12 10:52:50 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		result[j] = s2[i];
		j++;
		i++;
	}
	return (result);
}

// int main(void) {
//     const char *s1 = "Hello, ";
//     const char *s2 = "world!";
//     char *result = ft_strjoin(s1, s2);

//     if (result == NULL) {
//         printf("Falha na alocação de memória.\n");
//         return 1;
//     }

//     printf("String concatenada: %s\n", result);

//     free(result);
//     return 0;
// }
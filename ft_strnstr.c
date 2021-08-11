/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:24:04 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/06 18:51:25 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && (j + i < len))
		{
			j++;
		}
		if (j == ft_strlen(needle))
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	const char *haystack = "lorem ipsum dolor sit amet";
	const char *needle = "ipsumm";
	printf("%s\n", ft_strnstr(haystack, needle, 45));
	return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:13:16 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/11 17:57:29 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len_str;

	len_str = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (len_str + 1));
	if (!dest)
	{
		return (NULL);
	}
	if (*dest)
	{
		ft_memcpy(dest, s1, len_str);
		dest[len_str] = '\0';
	}
	return (dest);
}

/*int main()
{
	const char *s1 = "I malloc so I am.";
	printf("%s\n", ft_strdup(s1));
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:20:43 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/03 16:07:16 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != '\0' && *s != ch)
	{
		s++;
	}
	if (*s == ch)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int main()
{
	char *s = "123456";
	int c = '4';
	printf("%s\n", ft_strchr(s, c));
	return (0);
}*/
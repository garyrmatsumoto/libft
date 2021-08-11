/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:24:20 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/06 19:26:48 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = ft_strlen(s);
	if (*s)
	{
		while (s[i] != ch && i >= 0)
		{
			i--;
		}
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
//	if (s[0] == '\0')
//		return ("");
	return (NULL);
}

/*int main() //failed testcase (need a method to check for empty string literal)
{
	char *s = "";
	int c = 0;
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/
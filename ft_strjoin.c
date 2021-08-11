/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:20:16 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/04 16:19:50 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		slen1;
	int		slen2;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	s3 = (char *)malloc(slen1 + slen2 + 1);
	if (!s3)
		return (NULL);
	while (*s1)
	{
		s3[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		s3[i] = *s2++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}

/*int main()
{
	const char *s1 = "lorem ipsum";
	const char *s2 = "dolor sit amet";
	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}*/

/*failed test cases: NULL character as first character in either s1 or s2*/
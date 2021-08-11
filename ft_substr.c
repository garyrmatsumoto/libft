/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:40:17 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/04 16:43:20 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[start];
		i++;
		start++;
	}
	ss[i] = '\0';
	return (ss);
}

/*int main()
{
	char const *s = "lorem ipsum dolor sit amet";
	unsigned int start = 0;
	size_t len = 0;
	printf("%s\n", ft_substr(s, start, len));
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:02:49 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/07/20 15:18:10 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] != (unsigned char)c && i < n - 1)
	{
		i++;
	}
	if (str[i] == (unsigned char)c)
	{
		return ((void *)&str[i]);
	}
	return (NULL);
}

/*int main(void)
{
    char s1[] = "bonjour";
    int s = 'b';
    printf("%s", (char *)ft_memchr(s1, s, 4));
    return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:20:58 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/10 18:28:40 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	while (src[srclen])
	{
		srclen++;
		if (srclen == 1 && src[1] == '\0')
		{
			return (0);
		}
	}
	if (dstsize == 0)
	{
		return (srclen);
	}
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*int main()
{
	char *dst = NULL;
	char *src = NULL;
	size_t dstsize;

	dstsize = 10;
	printf("Before: %s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("After: %s\n", dst);
	return 0;
}*/
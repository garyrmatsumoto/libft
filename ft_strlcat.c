/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:42:53 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/07/20 13:42:49 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize < dlen + 1)
	{
		return (dstsize + slen);
	}
	if (dstsize > dlen + 1)
	{
		while (src[i] && dlen + 1 + i < dstsize)
		{
			dst[dlen + i] = src[i];
			i++;
		}
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*int main()
{
	char dst[] = "abcd";
	char *src;
	size_t dstsize;

	src = "abcd";
	dstsize = 1;
	printf("Before: %s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("After: %s\n", dst);
	return 0;
}*/
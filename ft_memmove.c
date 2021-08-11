/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:33:21 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/06 16:27:57 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (cdst == csrc || len == 0)
		return (dst);
	if (cdst > csrc && cdst - csrc < (int)len)
	{
		while (len > 0)
		{
			cdst[len - 1] = csrc[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
}

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = 0;
	if (cdst == csrc || len == 0)
		return (dst);
	if (cdst > csrc && cdst - csrc < (int)len)
	{
		while (i < len)
		{
			*(cdst + len - i - 1) = *(csrc + len - i - 1);
			i++;
		}
	}
	if (csrc > cdst && csrc - cdst < (int)len)
	{
		ft_memcpy(cdst, csrc, len);
		return (dst);
	}
	return (dst);
}
*/
//include memcpy with overlap check (forward or backwards)

/*int    main(void) //failed testcase
{
    char    src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
    printf("before: %s\n", dest);
    ft_memmove(dest, src, 8);
    printf("after: %s\n", dest);
    return (0);
}
*/
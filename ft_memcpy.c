/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:02:46 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/10 18:27:38 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	i = 0;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (cdst == 0 && csrc == 0)
		return (NULL);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
        char str1[128] = {1,1,1,1,1,1,1};
        char str2[] = "ab\0cde";
        int i;

        for (i=0; i<7; i++)
                printf("%x ",str1[i]);
        printf("\n");

        memcpy(str1, str2, 5);

        for (i=0; i<7; i++)
                printf("%x ",str1[i]);
        printf("\n");

        return 0;
} */
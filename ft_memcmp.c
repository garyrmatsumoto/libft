/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:35:48 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/07/19 16:46:23 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*su1;
	unsigned char	*su2;

	su1 = (unsigned char *)s1;
	su2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*su1 != *su2)
		{
			return (*su1 - *su2);
		}
		n--;
		su1++;
		su2++;
	}
	return (0);
}

/*int main()
{
    char          *s1;
    char          *s2;
    int           n;

    s1 = strdup("hello");
    s2 = strdup("hellop");
    n = ft_memcmp(s1, s2, 6);
    printf("%d\n", n);
}*/
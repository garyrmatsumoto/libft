/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:51:26 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/03 16:06:45 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*s;

	i = 0;
	ch = (unsigned char)c;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = ch;
		i++;
	}
	return (b);
}

/*int main (void)
{
    char str[] = "0123456789";
    ft_memset(str+2, '*', 5);
    printf("%s\n", str);
    return (0);
}*/
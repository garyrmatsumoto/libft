/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:47:34 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/03 13:42:38 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int main (void)
{
	printf("bzero Test\n");
    char str_ft_bzero[] = "0123456789";
    char str_bzero[] = "0123456789";

    ft_bzero(str_ft_bzero, 2);
    bzero(str_bzero, 2);
        
    printf("ft_bzero: %s\n",str_ft_bzero+1);
    printf("bzero: %s\n",str_bzero+1);
}*/
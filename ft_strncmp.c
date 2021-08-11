/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:31:47 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/06 19:03:19 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && i < n)
	{
		i++;
	}
	if (i == n) //why does this have to be here? still need to understand logic
	{
		i--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main()
{
	char *s1 = "abcdefgh";
	char *s2 = "abcdwxyz";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	return (0);
}*/
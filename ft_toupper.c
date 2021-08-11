/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:41:01 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/07/19 16:45:40 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		c = c - 32;
		return (c);
	}
	return (c);
}

/*int main()
{
	char c = 'a';
	printf("%c", ft_toupper(c));
	return(0);
}*/
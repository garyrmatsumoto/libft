/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:07:41 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/11 17:54:08 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int		ft_check_sign(int n, int sign)

/*char	*ft_check_zero_and_min(int n)
{
	char	*array;

	if (n == 0)
	{
		array = "0";
		return (array);
	}
	if (n == -2147483648)
	{
		array = "-2147483648";
		return (array);
	}
	return (NULL);
}*/



unsigned int	ft_check_int_len(int n_long)
{
	unsigned int length;
	long	temp;

	temp = n_long;
	length = 0;
	while (temp)
	{
		temp = temp / 10;
		length++;
	}
	return (length);
}

//need to deal with when n = 0

char	*ft_itoa(int n)
{
	char			*array;
	int				sign;
	unsigned int	i;
	unsigned int	int_len;
	long			n_long;

	n_long = (long)n;
	if (n == 0)
	{
		array = "0";
		return (array);
	}
	sign = 1;
	if (n_long < 0)
	{
		sign = -1;
		n_long = n_long * sign;
	}
	int_len = ft_check_int_len(n_long);
	array = NULL;
	if (sign == -1)
	{
		i = int_len;
		array = (char *)malloc(sizeof(char) * (int_len + 2));
		if (!array)
			return (NULL);
		while (n_long)
		{
			array[i] = n_long % 10 + '0';
			n_long = n_long / 10;
			i--;
		}
		array[0] = '-';
	}
	else if (sign == 1)
	{
		i = int_len - 1;
		array = (char *)malloc(sizeof(char) * (int_len + 1));
		if (!array)
			return (NULL);
		while (n_long)
		{
			array[i] = n_long % 10 + '0';
			n_long = n_long / 10;
			i--;
		}
	}
	if (array == NULL)
		return (NULL);
	array[int_len + 1] = '\0';
	return (array);
}

/*int main()
{
	int i = 0;
	printf("%s\n", ft_itoa(i));
	return 0;
}*/
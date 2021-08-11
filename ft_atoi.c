/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:14:02 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/10 18:34:22 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] || (str[i] > '0' && str[i] < '9') ||)
	{
		if (!(str[i] > '0' && str[i] < '9'))
			return (0);
		i++;
	}
	i = 0;
	if (str[i] == '\0')
		return (0);
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*int main()
{
    char str[] = "99999999999999999999999999";
    int val = ft_atoi(str);
    printf("%d\n", val);
    return 0;
}*/
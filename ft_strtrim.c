/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:15:37 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/04 13:26:23 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set) //still need to understand more fully
{
	size_t	front;
	size_t	back;
	char	*str;
	
	str = 0;
	if (s1 != 0 && set != 0) //checking to make sure both string to be trimmed AND string to get rid of are not empty
	{
		front = 0; // initialize front and back inside the if statement because that saves time in the case that either s or set is empty/zero
		back = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front])) //search for *set* characters from the front
		{
			front++;
		}
		while (s1[back - 1] && ft_strchr(set, s1[back - 1]) && back > front) //search for *set* characters from back
		{
			back--;
		}
		str = (char *)malloc(sizeof(char) * (back - front + 1)); //allocate memory for the length of original string - set + null
		if (str != NULL) //if string is not NULL (memory was allocated and address was returned)
		{
			ft_strlcpy(str, &s1[front], back - front + 1); //copy string that ignores front and back *set* characters to str
		}
	}
	return (str);
}

/*int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyxz", "xyz"));
	return 0;
}*/
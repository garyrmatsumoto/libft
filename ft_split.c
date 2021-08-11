/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatsumo <gmatsumo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:43:27 by gmatsumo          #+#    #+#             */
/*   Updated: 2021/08/11 17:54:16 by gmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_check_nbr_str(const char *s, char c)
{
	unsigned int	i;
	unsigned int	nbr_str;

	if (!s[0])
		return (0);
	i = 0;
	nbr_str = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nbr_str++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	return (nbr_str);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	*next_str = *next_str + *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nbr_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	nbr_str = ft_check_nbr_str(s, c);
	tab = (char **)malloc(sizeof(char *) * (nbr_str + 1));
	if (!tab)
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nbr_str)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1));
		if (!tab[i])
			return (ft_malloc_error(tab));
		(void)ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/*int main()
{
	char *s = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char c = ' ';
	unsigned int i = 0;
	char **tab = ft_split(s, c);
	while (tab)
	{
		printf("%s\n", &*tab[i]);
		i++;
	}
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:10:49 by agruet            #+#    #+#             */
/*   Updated: 2024/07/16 20:58:52 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!s)
		return (0);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;
	t_stock_str	*st;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (i <= ac)
	{
		st = malloc(sizeof(t_stock_str));
		if (!st)
			return (0);
		if (i == ac)
			st->str = 0;
		else
		{
			st->size = ft_strlen(av[i]);
			st->str = av[i];
			st->copy = ft_strdup(av[i]);
		}
		tab[i] = *st;
		i++;
	}
	return (tab);
}

/*int	main(int argc, char **argv)
{
	ft_strs_to_tab(argc, argv);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:10:31 by agruet            #+#    #+#             */
/*   Updated: 2024/11/05 15:26:36 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char	*str;
	str = ft_strdup(av[1]);
	printf("%s", str);
	return (0);
} */

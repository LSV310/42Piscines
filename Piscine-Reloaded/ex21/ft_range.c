/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:27:20 by agruet            #+#    #+#             */
/*   Updated: 2024/11/06 13:04:51 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i++] = min;
		min++;
	}
	return (tab);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void) ac;
	int	*tab;
	int i = 0;
	int	min = atoi(av[1]);
	int	max = atoi(av[2]);

	tab = ft_range(min, max);
	while (min < max)
	{
		printf("%d", tab[i++]);
		min++;
	}
	return (0);
} */

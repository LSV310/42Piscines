/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:37:43 by agruet            #+#    #+#             */
/*   Updated: 2024/11/07 12:12:44 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/* #include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = -nb;
	}
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
}

int	main(int ac, char **av)
{
	int	*tab;
	tab = malloc(sizeof(int) * ac - 1);
	int i = 0;
	while (i < ac - 1)
	{
		tab[i] = atoi(av[i + 1]);
		i++;
	}
	ft_foreach(tab, ac - 1, &ft_putnbr);
	return (0);
} */

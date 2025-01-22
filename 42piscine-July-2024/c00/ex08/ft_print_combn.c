/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:00:43 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 15:58:29 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

long int	det_taille(unsigned int nb)
{
	long int	dizaine;

	dizaine = 10;
	while (nb / dizaine)
		dizaine = dizaine * 10;
	return (dizaine);
}

void	ft_itoa(int nb, char *resu, int n)
{
	unsigned int	stock;
	long int		taille;
	char			tmp;
	int 			i = 0;

	if (nb < 0)
	{
		stock = nb * -1;
		resu[i] = '-';
		i++;
	}
	else
		stock = nb;
	taille = det_taille(stock);
	if (taille == ft_power(10, n))
		taille = taille / 10;
	while (taille)
	{
		tmp = stock / taille + '0';
		resu[i] = tmp;
		stock = stock % taille;
		taille = taille / 10;
		i++;
	}
		resu[i] = 0;
}

void	ft_print_combn(int n)
{
	static int	i;
	int			j;
	int			size;
	char		str[11];

	size = ft_power(10, n);
	while (i < size)
	{
		ft_itoa(i, str, n);
		j = 0;
		while (str[j] < str[j + 1])
			j++;
		if (j + 1 == n)
		{
			j = 0;
			while (str[j])
			{
				write(1, &str[j], 1);
				j++;
			}
			write(1, ", ", 2);
		}
		i++;
	}
}

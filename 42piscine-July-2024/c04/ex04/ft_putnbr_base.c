/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:52:41 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 16:02:24 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(base);
	if (size <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		i = -nbr;
	}
	else
		i = nbr;
	if (i >= size)
		ft_putnbr_base(i / size, base);
	write(1, &base[i % size], 1);
}

/*#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/

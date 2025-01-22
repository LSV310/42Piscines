/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:31:00 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 16:02:18 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		i = -nb;
	}
	else
		i = nb;
	if (i >= 10)
		ft_putnbr(i / 10);
	i = i % 10 + '0';
	write(1, &i, 1);
}

/*#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(atoi(argv[1]));
	return (0);
}*/

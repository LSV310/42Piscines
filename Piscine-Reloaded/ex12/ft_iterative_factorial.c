/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:09:51 by agruet            #+#    #+#             */
/*   Updated: 2024/11/06 11:59:45 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (nb >= 1)
		result *= nb--;
	return (result);
}

/* #include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_iterative_factorial(atoi(av[1])));
	return (0);
} */

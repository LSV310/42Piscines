/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:23:54 by agruet            #+#    #+#             */
/*   Updated: 2024/11/06 13:03:44 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* #include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_recursive_factorial(atoi(av[1])));
	return (0);
} */

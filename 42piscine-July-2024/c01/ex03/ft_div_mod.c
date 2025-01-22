/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:10:11 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 15:59:33 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	nbr1 = 12;
	int	nbr2 = 2;
	int	nbr3 = -1;
	int	nbr4 = -1;

	ft_div_mod(nbr1, nbr2, &nbr3, &nbr4);
	printf("a = %d, b = %d, div = %d, mod = %d\n", nbr1, nbr2, nbr3, nbr4);
	nbr2 = 5;
	ft_div_mod(nbr1, nbr2, &nbr3, &nbr4);
	printf("a = %d, b = %d, div = %d, mod = %d", nbr1, nbr2, nbr3, nbr4);
}*/

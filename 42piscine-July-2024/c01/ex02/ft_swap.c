/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:11:07 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 15:59:30 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 31;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	ft_swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d", b);
	return (0);
}*/

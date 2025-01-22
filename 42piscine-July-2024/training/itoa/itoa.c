/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:38:15 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 16:05:00 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_power(int nb)
{
	int				count;
	unsigned int	n;

	count = 0;
	if (nb < 0)
		n = -nb;
	else
		n = nb;
	while (n > 0)
	{
		count++;
		n /= nb;
	}
	return (count);
}

char	*ft_itoa(int nb)
{
	char			*dest;
	unsigned int	n;
	unsigned int	len_malloc;

	len_malloc = get_power(nb);
	if (nb < 0)
	{
		len_malloc++;
		n = -nb;
	}
	else
		n = nb;
	dest = (char *)malloc(sizeof(char) * (len_malloc + 1));
	if (nb < 0)
		dest[0] = '-';
	dest[len_malloc] = '\0';
	while (n > 0)
	{
		len_malloc--;
		dest[len_malloc] = n % 10 + '0';
		n /= 10;
	}
	return (dest);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa(atoi(argv[1])));
}

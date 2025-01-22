/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:23:42 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 16:04:11 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_power(int nb, int size)
{
	unsigned int	count;
	unsigned int	n;

	count = 0;
	if (nb < 0)
	{
		n = -nb;
		count++;
	}
	else
		n = nb;
	while (n > 0)
	{
		count++;
		n /= size;
	}
	return (count);
}

char	*ft_itoa_base(int nb, char *base)
{
	unsigned int	n;
	int				len;
	int				size;
	char			*dest;

	n = 0;
	size = ft_strlen(base);
	len = get_power(nb, size);
	if (nb < 0)
		n = -nb;
	else
		n = nb;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	dest[len] = '\0';
	if (nb < 0)
		dest[0] = '-';
	while (n > 0)
	{
		len--;
		dest[len] = n % size + '0';
		n /= size;
	}
	return (dest);
}

/* #include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa_base(atoi(argv[1]), argv[2]));
	return (0);
} */

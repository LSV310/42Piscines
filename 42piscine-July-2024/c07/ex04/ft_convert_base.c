/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:05:18 by agruet            #+#    #+#             */
/*   Updated: 2024/07/16 01:37:56 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

long int	det_taille(int nb, int size)
{
	long int	d;
	int			i;

	d = size;
	i = 0;
	while (nb / d)
	{
		d = d * size;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(char *str, int nbr, char *base)
{
	unsigned int	i;
	unsigned int	size;
	static int		j;

	i = 0;
	size = ft_strlen(base);
	if (size <= 1)
		return ;
	if (nbr < 0)
	{
		str[j++] = '-';
		i = -nbr;
	}
	else
		i = nbr;
	if (i >= size)
		ft_putnbr_base(str, i / size, base);
	str[j++] = base[i % size];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	char			*str;
	unsigned char	size;

	i = ft_atoi_base(nbr, base_from);
	if (!i)
		return (0);
	size = det_taille(i, ft_strlen(base_to)) + 1;
	if (i < 1)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	ft_putnbr_base(str, i, base_to);
	str[size] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str = ft_convert_base(argv[1], argv[2], argv[3]);

	(void)argc;
	printf("%s", str);
	free(str);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:07:32 by agruet            #+#    #+#             */
/*   Updated: 2024/07/17 17:22:31 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_size;

	i = 0;
	dst_size = 0;
	while (dest[dst_size])
		dst_size++;
	if (size <= dst_size)
		return (ft_strlen(src) + size);
	while (src[i] && i < size - dst_size - 1)
	{
		dest[dst_size + i] = src[i];
		i++;
	}
	dest[i + dst_size] = '\0';
	return (ft_strlen(src) + dst_size);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(int ac, char **av)
{
	(void)ac;
	char *dest1 = strdup(av[1]);
	char *dest2 = strdup(av[1]);
	char *src1 = strdup(av[2]);
	char *src2 = strdup(av[2]);
	int size = atoi(av[3]);

	printf("ORIGINALE : return = %lu,  dest = %s\n",
	strlcat(dest1, src1, size), dest1);
	printf("REPLIQUE  : return = %u,  dest = %s\n",
	ft_strlcat(dest2, src2, size), dest2);
	return (0);
}*/

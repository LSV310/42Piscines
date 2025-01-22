/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:38:03 by agruet            #+#    #+#             */
/*   Updated: 2025/01/22 16:04:43 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;
	int	size;
	int	found;

	i = 0;
	j = 0;
	size = ft_strlen(str1);
	while (str1[i])
	{
		found = i;
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				j++;
				found++;
				break;
			}
			j++;
		}
		i++;
	}
	if (found == size)
		ft_putstr(str1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_wdmatch(argv[1], argv[2]);
	return (0);
}

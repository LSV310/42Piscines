/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:46:29 by agruet            #+#    #+#             */
/*   Updated: 2024/11/08 11:17:48 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *str, int size, int fd)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_read_file(int fd)
{
	char	buffer[100];
	int		readed;

	readed = 100;
	while (readed == 100)
	{
		readed = read(fd, buffer, 100);
		ft_putstr_fd(buffer, readed, 1);
	}
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac < 2)
	{
		ft_putstr_fd("File name missing.\n", 19, 2);
		return (-1);
	}
	else if (ac > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 20, 2);
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		ft_putstr_fd("Cannot read file.\n", 18, 2);
	else
		ft_read_file(fd);
	fd = close(fd);
	return (fd);
}

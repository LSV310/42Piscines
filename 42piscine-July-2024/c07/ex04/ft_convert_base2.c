/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:37:38 by agruet            #+#    #+#             */
/*   Updated: 2024/07/16 00:41:27 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char *str, int i)
{
	if ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || is_whitespace(str, i))
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	index_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	result;
	int	size;

	i = 0;
	result = 0;
	negative = 1;
	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	while (is_whitespace(str, i))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if ((str[i]) == '-')
			negative *= -1;
		i++;
	}
	while (index_base(base, str[i]) >= 0)
	{
		result = result * size + (index_base(base, str[i]));
		i++;
	}
	return (result * negative);
}

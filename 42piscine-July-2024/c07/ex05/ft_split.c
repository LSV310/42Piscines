/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 01:43:31 by agruet            #+#    #+#             */
/*   Updated: 2024/07/18 17:56:50 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_sep(char *charset, char c)
{
	int	i;

	i = 0;
	if (!charset)
		return (1);
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	new_word;
	int	words;
	int	i;

	new_word = 1;
	words = 0;
	i = 0;
	if (!charset)
		return (1);
	while (str[i])
	{
		if (!is_sep(charset, str[i]))
		{
			if (new_word)
			{
				words++;
				new_word = 0;
			}
		}
		else
			new_word = 1;
		i++;
	}
	return (words);
}

unsigned int	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		count;
	char	**strs;

	i = 0;
	j = 0;
	count = 0;
	strs = malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	if (!strs)
		return (0);
	if (!charset)
		strs[i++] = str;
	while (str[j] && i < ft_count(str, charset))
	{
		while (is_sep(charset, str[count]))
			count++;
		j = count;
		while (!is_sep(charset, str[count]) && str[count])
			count++;
		strs[i] = malloc(sizeof(char) * (count - j + 1));
		ft_strncpy(strs[i++], &str[j], count - j);
	}
	strs[i] = 0;
	return (strs);
}

/*#include <stdio.h>
int main(int ac, char **av)
{
	char **strs = NULL;
	int i;
	//char *t = NULL;

	i = 0;
	if (ac >= 2)
	{
		strs = ft_split(av[1], av[2]);
		while(strs[i] != 0)
		{
			printf("%s\n",strs[i]);
			//free(strs[i]);
			i++;
		}
		//free(strs[i]);
		//free(strs);
	}
	return (0);
}*/

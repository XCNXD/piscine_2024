/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:14:37 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/12 14:41:32 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char **tabptr1, char **tabptr2)
{
	char	*tmp;

	tmp = *tabptr2;
	*tabptr2 = *tabptr1;
	*tabptr1 = tmp;
}

void	prints(char **s, int j)
{
	int	i;
	int	k;

	k = 1;
	while (k < j)
	{
		i = 0;
		while (s[k][i] != 0)
		{
			write(1, s[k] + i, 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap(argv + j , argv + j + 1);
			j++;
		}
		i++;
	}
	prints(argv, argc);
}
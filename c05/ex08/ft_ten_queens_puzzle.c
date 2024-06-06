/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:47:48 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/06 15:45:02 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_in_array(int *a, int *b, int *c, int *i_j)
{
	int	k;
	int	i;
	int	j;

	k = 0;
	i = i_j[0] + 42;
	j = i_j[1] + 42;
	while (k < 10)
	{
		if (a[k] == j || b[k] == i + j || c[k] == i - j + 42)
		{
			return (0);
		}
		k++;
	}
	return (1);
}

void	array_clear(int *a, int *b, int *c, int i)
{
	a[i] = 0;
	b[i] = 0;
	c[i] = 0;
}

void	printr(int *row, int *count)
{
	int		i;
	char	s;

	i = 0;
	*count += 1;
	while (i < 10)
	{
		s = row[i] + '0';
		write(1, &s, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	recusive(int i, int *row, int **pointer, int *count)
{
	int	j;
	int	i_j[2];

	j = 0;
	if (i < 10)
	{
		while (j < 10)
		{
			i_j[0] = i;
			i_j[1] = j;
			if (find_in_array(pointer[0], pointer[1], pointer[2], i_j))
			{
				row[i] = j;
				pointer[0][i] = j + 42;
				pointer[1][i] = i + j + 84;
				pointer[2][i] = i - j + 42;
				recusive(i + 1, row, pointer, count);
				array_clear(pointer[0], pointer[1], pointer[2], i);
			}
			j++;
		}
	}
	else
		printr(row, count);
}

int	ft_ten_queens_puzzle(void)
{
	int	cross_right[10];
	int	cross_left[10];
	int	usage_column[11];
	int	usage_row[10];
	int	*pointer[4];

	pointer[0] = usage_column;
	pointer[1] = cross_right;
	pointer[2] = cross_left;
	pointer[3] = &usage_column[11];
	recusive(0, usage_row, pointer, pointer[3]);
	return (*pointer[3]);
}

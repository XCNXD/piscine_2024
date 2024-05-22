/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 01:53:39 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/23 01:53:39 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	recusive_n_number(int n, int i, int t, char*arr)
{
	int		max;
	char	s;

	max = 11 - n + t;
	if (t == n)
	{
		return ;
	}
	while (i < max)
	{
		s = i + 48;
		arr[t] = s;
		recusive_n_number(n, i + 1, t + 1, arr);
		if (t + 1 == n)
		{
			write(1, arr, n);
			if (arr[0] != 58 - n)
			{
				write(1, ", ", 2);
			}
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	array[10];

	recusive_n_number(n, 0, 0, array);
}

void	main(void)
{
	ft_print_combn(2);
}

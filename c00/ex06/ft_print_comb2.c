/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 02:17:32 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/23 02:17:32 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(int a)
{
	char	s;

	s = a + 48;
	write(1, &s, 1);
}

void	write_combination(int x, int y)
{
	write_char(x / 10);
	write_char(x % 10);
	write(1, " ", 1);
	write_char(y / 10);
	write_char(y % 10);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			write_combination(x, y);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

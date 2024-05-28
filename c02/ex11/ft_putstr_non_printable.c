/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:48:52 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/28 15:20:34 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char s)
{
	write(1, &s, 1);
}

void	ft_convert_and_write(char c)
{
	char	c1;
	char	c2;

	ft_putc('\\');
	c1 = c / 16 + 48;
	c2 = "0123456789abcdef"[c % 16];
	ft_putc(c1);
	ft_putc(c2);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < ' ' || str [i] > '~')
		{
			ft_convert_and_write(str[i]);
		}
		else
		{
			ft_putc(str[i]);
		}
		i++;
	}
	return ;
}

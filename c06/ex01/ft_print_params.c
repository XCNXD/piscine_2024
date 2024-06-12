/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:08:40 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/12 12:10:51 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prints(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		write(1, s + i, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			prints(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}

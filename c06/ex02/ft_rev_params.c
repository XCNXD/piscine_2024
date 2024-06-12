/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:08:40 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/12 12:13:43 by paboonro         ###   ########.fr       */
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

	i = argc;
	if (argc > 1)
	{
		while (i > 1)
		{
			prints(argv[i - 1]);
			write(1, "\n", 1);
			i--;
		}
	}
}

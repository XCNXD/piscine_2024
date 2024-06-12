/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:59:16 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/12 12:05:39 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	i = 0;
	if (argc != 0)
	{
		s = argv[0];
		while (s[i] != 0)
		{
			write(1, s + i, 1);
			i++;
		}
		write(1, "\n", 1);
	}
}

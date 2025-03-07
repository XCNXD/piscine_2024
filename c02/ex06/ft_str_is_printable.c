/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:26:48 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/30 17:25:26 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] < ' ' || str [i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

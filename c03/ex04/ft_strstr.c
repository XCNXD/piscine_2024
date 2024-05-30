/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:59:28 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/30 11:59:28 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j] && str[i + j] != 0)
			j++;
		if (to_find[j] == 0)
		{
			return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

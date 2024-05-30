/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:59:24 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/30 11:59:24 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb != 0)
	{
		while (dest[i] != 0)
			len++;
		while (j < nb && src[j] != 0)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = 0;
	}
	return (dest);
}

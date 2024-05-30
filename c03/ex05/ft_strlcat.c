/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:59:31 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/30 11:59:31 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	i = 0;
	dlen = len(dest);
	slen = len(src);
	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}
	while (i < size - dlen - 1 && src[i] != 0)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = 0;
	return (slen + dlen);
}

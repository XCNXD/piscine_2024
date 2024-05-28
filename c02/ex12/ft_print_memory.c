/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:32:59 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/28 19:39:03 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(void *cur_ad, char *number)
{
	char	tmp[2];
	char	*radix;

	if (cur_ad <= (void *)number)
	{
		write(1, "  ", 2);
	}
	else
	{
		radix = "0123456789abcdef";
		tmp[0] = radix[(unsigned char)*number / 16];
		tmp[1] = radix[(unsigned char)*number % 16];
		write(1, tmp, 2);
	}
}

void	deg_to_hex(char *buffer, int h, int t, int arr[])
{
	char	*radix;
	int		j;

	radix = "0123456789abcdef";
	j = -1;
	while (j++ < 15)
	{
		h = 15 - j;
		if (h <= t)
		{
			buffer[j] = radix[arr[h]];
		}
		else
		{
			buffer[j] = '0';
		}
	}
}

char	*address_to_hex(void *addr, char buffer[])
{
	unsigned long	i;
	int				t;
	int				arr[16];

	t = 0;
	i = (unsigned long)addr;
	while (i / 16 != 0)
	{
		arr[t++] = i % 16;
		i /= 16;
	}
	arr[t] = i;
	deg_to_hex(buffer, 0, t, arr);
	write(1, buffer, 16);
	write(1, &": ", 2);
	return (buffer);
}

void	ft_printmem_sub(void *s_adr, unsigned int s, char *c_a, char *c)
{
	char	buffer[16];
	int		idx;

	idx = 0;
	address_to_hex((void *)c_a, buffer);
	while (idx++ < 16)
	{
		print_hex(s_adr + s, c_a + idx - 1);
		if (idx % 2 == 0)
			write(1, &" ", 1);
	}
	idx = 0;
	while (idx++ < 16)
	{
		if (s_adr + s > (void *)(c_a + idx - 1))
		{
			c = (char *)c_a + idx - 1;
			if (*c >= ' ' && *c != 127)
				write(1, c, 1);
			else
				write(1, &".", 1);
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*c_a;
	char	*c;

	c = "";
	if (size != 0)
	{
		c_a = (char *)addr;
		while ((void *)c_a < (addr + size))
		{
			ft_printmem_sub(addr, size, c_a, c);
			write(1, &"\n", 1);
			c_a += 16;
		}
		return (addr);
	}
	return (addr);
}

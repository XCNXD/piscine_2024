/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:32:59 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/28 18:16:00 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*address_to_hex(unsigned int addr, char buffer[])
{
	unsigned int	i;
	int				t;
	int				h;
	int				arr[16];
	char			*radix;

	radix = "0123456789abcdef";
	t = 0;
	i = addr;
	while (i / 16 != 0)
	{
		arr[t++] = i % 16;
		i /= 16;
	}
	arr[t] = i;
	deg_to_hex(buffer, h, t, arr);
	return (buffer);
}

int	ft_printmem_sub(void *start_addr, unsigned int size, char *curr_addr)
{
	char buffer[16];
	
	address_to_hex((unsigned int)curr_addr, buffer);
	write(1, buffer, 16);
	return 1;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr_addr;
	if (size != 0)
	{
		curr_addr = (char *)addr;
		while ((void *)curr_addr < (addr + size))
		{
			ft_printmem_sub(addr, size, curr_addr);
			write(1, &"\n", 1);
			curr_addr += 16;
		}
		return (addr);
	}	
	return (addr);
}

int main()
{
	char x[14] = "HAHAHAHAHAHA";
	ft_print_memory(x, 14);
}
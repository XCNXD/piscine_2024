/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:21:06 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/06 13:20:30 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str, int len)
{
	int	i;

	i = 0;
	while (i != len + 1)
	{
		write(1, str + i, 1);
		i++;
	}
}

void	printbase(int *nb, char *base, int len_base)
{
	int		i;
	int		j;
	char	s[32];

	i = len_base;
	j = 0;
	while (i >= 0)
	{
		if (nb[i] < 0)
		{
			nb[i] *= -1;
		}
		s[j] = base[nb[i]];
		i--;
		j++;
	}
	print_str(s, len_base);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	check_base_error(char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = len(base);
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i] != 0)
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < k)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	carry[32];
	int	base_count;
	int	i;

	base_count = 0;
	i = 0;
	if (check_base_error(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		while (base[base_count] != 0)
			base_count++;
		while (nbr / base_count != 0)
		{
			carry[i] = nbr % base_count;
			nbr /= base_count;
			i++;
		}
		carry[i] = nbr;
		printbase(carry, base, i);
	}
}

// int		main(void)
// {
// 	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
// }
// {
// 	ft_putnbr_base(-12, "01");
// 	printf("\n");
// 	ft_putnbr_base(40, "poneyvif");
// 	printf("\n");
// 	ft_putnbr_base(894867, "0123456789");
// 	printf("\n");
// 	ft_putnbr_base(53, "0123456789abcdef");
// }
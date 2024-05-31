/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:21:06 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/31 18:21:06 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	printbase(int *nb, char *base, int len_base)
{
	int number;
	int i;
	char s[16];

	i = len_base;
	number = 0;
	while(i >= 0)
	{
		s[i]
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	carry[16];
	int base_count;
	int i = 0;

	base_count = 0;
	i = 0;
	while (base[base_count] != 0)
		base_count++;
	while (carry/base_count == 0)
	{
		carry[i] = carry % base;
		carry /= base;
		i++;
	}
	carry[i] = carry;
	printbase(nbr, base, i);
}
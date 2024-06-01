/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:18:32 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/01 21:18:32 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	check_base_error(char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = ft_strlen(base);
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
	return (i);
}

int	to_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	str_to_hex_exp(char *str, char *base)
{
	int	i;
	int	sum;
	int	base_len;

	i = 0;
	sum = 0;
	base_len = ft_strlen(base);
	while (str[i] != 0)
	{
		sum *= base_len;
		sum += to_base(str[i], base);
		i++;
	}
	return (sum);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num;

	sign = 1;
	i = 0;
	if (check_base_error(base) >= 2)
	{
		while (str[i] <= ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				sign *= -1;
			}
			i++;
		}
		num = str_to_hex_exp(str + i, base);
		return (num * sign);
	}
	return (0);
}

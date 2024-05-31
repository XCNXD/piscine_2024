/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:15:28 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/30 12:31:28 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str){
	int	i;
	int num;
	int sign;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] <= ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	return (num * sign);
}

// #include <stdio.h>
// int main(int argc, char **argv){
// 	printf("%d %d",argc, ft_atoi(argv[1]));
// 	return 0;
// }
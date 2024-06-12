/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:57:17 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/12 11:50:10 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recusive(int nb, int i, int power, int number)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	if (i == power)
	{
		return (nb * number);
	}
	return (nb * recusive(nb, i + 1, power, number));
}

int	ft_recursive_power(int nb, int power)
{
	int	num;

	num = 1;
	return (recusive(nb, 1, power, num));
}

// int main(){
// 	printf("%d", ft_recursive_power(2, 2));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:16:13 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/04 12:50:33 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	i;

	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	num = nb;
	i = 1;
	while (i != power)
	{
		num *= nb;
		i++;
	}
	return (num);
}

// int main(){
// 	printf("%d", ft_iterative_power(2, 2));
// }
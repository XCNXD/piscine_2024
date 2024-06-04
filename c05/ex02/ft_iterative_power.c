/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:16:13 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/02 12:16:57 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int i;

	num = nb;
	i = 0;
	while (i != power)
	{
		num *= num;
		i++;
	}
	return (num);
}

int main(){
	printf("%d", ft_iterative_power(2, 2));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 11:55:31 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/02 12:01:13 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (nb == 0)
	{
		return (1);
	}else if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
		num *= (nb);
		nb--;
	}
	return (num);
}

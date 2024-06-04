/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:08:09 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/02 12:08:15 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	real_fac(int num, int i)
{
	if (num - i == 0)
	{
		return (1);
	}
	return ((num - i) * real_fac(num, i + 1));
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (real_fac(nb, 0));
}

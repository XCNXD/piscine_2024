/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:09:28 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/04 13:09:29 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recusive(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1 || n == 2)
	{
		return (1);
	}
	return (recusive(n - 1) + recusive(n - 2));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	return (recusive(index));
}

// int	main(void)
// {
// 	printf("%i", ft_fibonacci(10));
// }
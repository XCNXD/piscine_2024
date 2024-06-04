/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:43:46 by paboonro          #+#    #+#             */
/*   Updated: 2024/06/04 13:43:46 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	num;

	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	num = 2;
	if (nb > 2)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
			{
				return (num);
			}
			num++;
		}
	}
	return (0);
}

// int    main(void)
// {
// 	printf("sqrt of %d is %d\n", 4, ft_sqrt(4));
//     return (0);
// }
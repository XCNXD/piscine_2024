/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:19:13 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/27 16:11:04 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n_size;
	int	tmp;

	n_size = 0;
	while (n_size < size / 2)
	{
		tmp = tab[n_size];
		tab[n_size] = tab[size - 1 - n_size];
		tab[size - 1 - n_size] = tmp;
		n_size++;
	}
}

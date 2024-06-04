/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboonro <paboonro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:39:42 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/27 12:41:42 by paboonro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tabptr1, int *tabptr2)
{
	int	tmp;

	tmp = *tabptr2;
	*tabptr2 = *tabptr1;
	*tabptr1 = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	lowest_idx;

	i = 0;
	lowest_idx = 0;
	while (i < size)
	{
		if (tab[i] < tab[lowest_idx])
		{
			swap(tab + lowest_idx, tab + i);
			i = 0;
		}
		else
		{
			i++;
			lowest_idx = i - 1;
		}
	}
}

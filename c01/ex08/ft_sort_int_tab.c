/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:12:41 by youbihi           #+#    #+#             */
/*   Updated: 2023/08/19 13:23:40 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	b;

	i = 0;
	b = size - 1;
	temp = 0;
	while (i <= b - 1)
	{
		j = i + 1;
		while (j <= b)
		{
			if (tab[i] > tab[j])
			{
				temp = tab [i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

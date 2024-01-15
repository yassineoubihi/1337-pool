/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:49:15 by youbihi           #+#    #+#             */
/*   Updated: 2023/08/19 10:56:06 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	a;

	a = size - 1;
	temp = 0;
	i = 0;
	while (i < a)
	{
		temp = tab[i];
		tab[i] = tab[a];
		tab[a] = temp;
		i++;
		a--;
	}
}

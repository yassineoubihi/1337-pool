/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:47:09 by youbihi           #+#    #+#             */
/*   Updated: 2023/09/04 09:47:14 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arr_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*str;

	i = 0;
	len = arr_size(min, max);
	if (len < 0)
	{
		*range = NULL;
		return (0);
	}
	str = malloc(sizeof(int) * len);
	if (!str)
		return (-1);
	while (i < len)
	{
		str[i] = min;
		min++;
		i++;
	}
	*range = str;
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:46:30 by youbihi           #+#    #+#             */
/*   Updated: 2023/09/04 09:46:34 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

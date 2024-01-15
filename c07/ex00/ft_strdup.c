/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:46:11 by youbihi           #+#    #+#             */
/*   Updated: 2023/09/04 09:46:15 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		a;
	char	*pa;

	i = 0;
	a = 0;
	while (src[i])
	{
		i++;
	}
	pa = (char *)malloc((i + 1) * sizeof(char));
	while (src[a])
	{
		pa[a] = src[a];
		a++;
	}
	pa[a] = '\0';
	return (pa);
}

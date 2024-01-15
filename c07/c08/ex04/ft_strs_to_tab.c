/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:51:20 by youbihi           #+#    #+#             */
/*   Updated: 2023/09/05 00:51:24 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		a;
	char	*b;
	char	*c;

	a = ft_strlen(src);
	b = (char *)malloc(sizeof(char) * (a + 1));
	if (b == 0)
		return (0);
	c = b;
	while (*src)
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';
	return (b);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*alloc;

	alloc = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!alloc)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		alloc[i].size = ft_strlen(av[i]);
		alloc[i].str = av[i];
		alloc[i].copy = ft_strdup(av[i]);
		i++;
	}
	alloc[i].str = 0;
	alloc[i].copy = 0;
	return (alloc);
}

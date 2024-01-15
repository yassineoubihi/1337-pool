/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 08:12:55 by youbihi           #+#    #+#             */
/*   Updated: 2023/08/28 08:14:06 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	b;
	int	i;

	i = 0;
	b = argc - 1;
	while (b > 0)
	{
		while (argv[b][i])
		{
			ft_putchar(argv[b][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		b--;
	}
}

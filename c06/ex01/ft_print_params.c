/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 08:03:32 by youbihi           #+#    #+#             */
/*   Updated: 2023/08/28 08:11:41 by youbihi          ###   ########.fr       */
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
	b = 1;
	while (b < argc)
	{
		while (argv[b][i])
		{
			ft_putchar(argv[b][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		b++;
	}
}

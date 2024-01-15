/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:37:11 by youbihi           #+#    #+#             */
/*   Updated: 2023/08/27 04:00:22 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0) 
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

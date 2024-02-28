/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:45:27 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/08 14:19:36 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = -5;
	power = 5;
	result = ft_iterative_power(nb, power);
	printf("The %d power of %d is: %d\n", power, nb, result);
	return (0);
}
*/
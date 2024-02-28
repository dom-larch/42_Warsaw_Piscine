/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:45:43 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/05 19:24:46 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 5;
	power = 5;
	result = ft_recursive_power(nb, power);
	printf("The %d power of %d is: %d\n", power, nb, result);
	return (0);
}
*/
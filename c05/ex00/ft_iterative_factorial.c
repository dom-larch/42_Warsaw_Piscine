/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:44:54 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/05 15:27:26 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	result;

	nb = 0;
	result = ft_iterative_factorial(nb);
	printf("The factorial of %d is: %d\n", nb, result);
	return (0);
}
*/
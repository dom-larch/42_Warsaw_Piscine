/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:46:17 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/08 16:10:27 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	result;

	nb = 2147395600;
	result = ft_sqrt(nb);
	printf("The square root of %d is: %d\n", nb, result);
	return (0);
}
*/
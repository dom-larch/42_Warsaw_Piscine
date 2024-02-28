/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:33:16 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/22 16:45:29 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int number)
{
	char	c;

	c = number + 48;
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		digit;

	digit = 0;
	while (digit <= 9)
	{
		ft_putnum(digit);
		digit++;
	}
}

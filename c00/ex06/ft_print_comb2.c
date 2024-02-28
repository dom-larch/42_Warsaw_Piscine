/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:59:01 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/22 14:26:43 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_put_nums(int n)
{
	int		decimals;
	int		digits;

	decimals = n / 10 + 48;
	digits = n % 10 + 48;
	ft_putchar(decimals);
	ft_putchar(digits);
}

void	ft_print_comb2(void)
{
	int		first_pair;
	int		second_pair;

	first_pair = 0;
	while (first_pair < 99)
	{
		second_pair = first_pair + 1;
		while (second_pair <= 99)
		{
			ft_put_nums(first_pair);
			ft_putchar(' ');
			ft_put_nums(second_pair);
			if (first_pair != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_pair++;
		}
		first_pair++;
	}
}

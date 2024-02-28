/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:12:32 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/22 14:25:05 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_nums(int x, int y, int z)
{
	char	a;
	char	b;
	char	c;

	a = x + 48;
	b = y + 48;
	c = z + 48;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (x != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int		first_num;
	int		second_num;
	int		third_num;

	first_num = 0;
	while (first_num <= 7)
	{
		second_num = first_num + 1;
		while (second_num <= 8)
		{
			third_num = second_num + 1;
			while (third_num <= 9)
			{
				ft_put_nums(first_num, second_num, third_num);
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}

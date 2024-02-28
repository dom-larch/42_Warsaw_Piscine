/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:08:26 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/05 14:25:55 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] < 48 || (base[i] > 57 && base[i] < 65)
			|| (base[i] > 90 && base[i] < 97) || base[i] > 122)
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	char	digit;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= size)
		ft_putnbr_base_rec(nbr / size, base, size);
	digit = base[nbr % size];
	write(1, &digit, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	if (!(is_valid_base(base)))
		return ;
	while (base[size] != '\0')
		size++;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
	}
	else
	{
		ft_putnbr_base_rec(nbr, base, size);
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc <= 2 || argc > 3)
	{
		printf("%s", "Please enter number followed by the base system");
		return (0);
	}
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/
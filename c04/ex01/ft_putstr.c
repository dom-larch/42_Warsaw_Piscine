/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:37:33 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/03 21:35:30 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Enter exactly 1 string", 23);
	}
	else
	{
		ft_putstr(argv[1]);
	}
	return (0);
}
*/
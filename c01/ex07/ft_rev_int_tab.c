/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:24:00 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/23 14:06:19 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp1;
	int	temp2;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp1 = tab[i];
		temp2 = tab[j];
		tab[i] = temp2;
		tab[j] = temp1;
		i++;
		j--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:17:48 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/01 15:23:52 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i - j]);
			}
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s", "Enter exactly 2 strings");
	}
	else
	{
		printf("%s", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
*/
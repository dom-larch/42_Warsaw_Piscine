/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:55:01 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/30 15:20:42 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	lowcase(char a)
{
	if (a >= 65 && a <= 90)
	{
		a += 32;
		return (a);
	}
	else
	{
		return (a);
	}
}

char	upcase(char a)
{
	if (a >= 97 && a <= 123)
	{
		a -= 32;
		return (a);
	}
	else
	{
		return (a);
	}
}

int	isnotalphanum(char a)
{
	if (((a < 48)
			|| ((a > 57) && (a < 65))
			|| ((a > 90) && (a < 97))
			|| (a > 122)))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] == '\0')
		return ('\0');
	if (str[0] != '\0' && str[0] >= 97 && str[0] <= 123)
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (isnotalphanum(str[i - 1]) == 0)
		{
			str[i] = upcase(str[i]);
		}
		else
		{
			str[i] = lowcase(str[i]);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	string[] = "Salut,comMent? 	42mots quarante-deux; cinquante+et+un";
	char	*result;

	result = ft_strcapitalize(string);
	printf("%s", result);
	return (0);
}
*/
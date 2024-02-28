/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_DM.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:19:32 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/06 16:22:28 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //read write
#include <stdlib.h> //malloc
#include <fcntl.h> //open

// Check if number given as parameter is positive
int	is_positive_number(char *input)
{
	if (input[0] == '-')
		return (0);
	else
		return (1);
}

// Custom implementation of string printing
void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// Custom strstr returning only written number for given int
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				n = i;
				while (str[n] && (str[n] < 'a' || str[n] > 'z'))
					n++;
				while (str[i] != '\n')
					i++;
				str[i] = '\0';
				return (&str[n]);
			}
		}
		i++;
	}
	return (0);
}

// Finds a string for given number in the dictionary
void	read_dictionary(char *number, char *filename)
{
	int		fd;
	int		bytesread;
	char	*dictionary;
	char	*result;

	dictionary = malloc(1024);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error", 5);
		free(dictionary);
		return ;
	}
	bytesread = read(fd, dictionary, 1024);
	if (bytesread == -1)
	{
		write(1, "Error", 5);
		free(dictionary);
		close(fd);
		return ;
	}
	result = ft_strstr(dictionary, number);
	ft_print_str(result);
	close(fd);
	free(dictionary);
}

int	main(int argc, char *argv[])
{
	int		truth;

	truth = 0;
	if (argc > 3 || argc <= 1)
	{
		write(1, "Error", 5);
		return (0);
	}
	truth = is_positive_number(argv[1]);
	if (truth == 0)
	{
		write(1, "Error", 5);
		return (0);
	}
	read_dictionary(argv[1], "numbers.dict");
	return (0);
}

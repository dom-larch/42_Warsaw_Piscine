/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:33:34 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/24 14:25:42 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main (void)
{
	char c[1500];
	char *dest;
	char *src;
	char *final;
	
	dest = c;
	src = "Dominik Modrzejewski jest super";
	printf("%p", dest);
	printf("\n");
	printf("%p", src);
	printf("\n");
	printf("%s", src);
	printf("\n");
	printf("%s", dest);
	printf("\n");
	
	final = ft_strcpy(dest, src);
	printf("%p", final);
	printf("\n");
	printf("%p", src);
	printf("\n");
	printf("%s", src);
	printf("\n");
	printf("%s", final);

	return(0);
}
*/

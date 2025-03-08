/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:39:40 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/01 16:46:38 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*tempp;
	unsigned int	i;

	tempp = dest;
	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (tempp);
}
/*
int	main(void)
{
	char	src[15] = "Hello World!?!";
	char	dest[50] = "Only 10c";
	unsigned int n = 10;
	printf("Before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("After: %s", dest);
	return (0);  
}
*/

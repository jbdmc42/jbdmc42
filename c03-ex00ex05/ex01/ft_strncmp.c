/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 07:56:13 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/04 17:16:47 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 1)
	{
		return (0);
	}
	while ((i + 1) < n && (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char			str1[] = "ABCD";
	char			str2[] = "AB";
	unsigned int	n = 0;
	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}
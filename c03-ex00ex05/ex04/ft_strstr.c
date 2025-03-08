/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:32:09 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/03 09:43:06 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
				{
					return (&str[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str;
	char	*to_find;

	str = "ABCDEFGHI";
	to_find = "";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/

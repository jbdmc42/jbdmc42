/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:02:18 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/04 17:39:18 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	cal_len(char *str)
{
	unsigned int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = cal_len(dest);
	src_len = cal_len(src);
	if (size <= dest_len)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && (dest_len + j) < (size - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char 			dest[] = "This is ";
	char 			src[] = "s" ;
	unsigned int	size = 5;
	printf("%u", ft_strlcat(dest, src, size));
}
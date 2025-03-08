/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:12:48 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/04 15:10:44 by joaobarb         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;	

	src_len = cal_len(src);
	i = 0;
	while (src[i] != '\0' && )
	return (src_len);
}

int	main(void)
{
	char 			dest[10] = "This is ";
	char 			src[] = "si" ;
	unsigned int	size = 50;
	printf("After: %d", ft_strlcpy(dest, src, size));
}

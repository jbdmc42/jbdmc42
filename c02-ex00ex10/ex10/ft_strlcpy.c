/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdmc <jbdmc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:12:48 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/08 18:03:09 by jbdmc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

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
	unsigned int	j;
	unsigned int	src_len;

	src_len = cal_len(src);
	if (size == 0)
		return (src_len);
	j = 0;
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (src_len);
}

/* int	main(void)
{
	char dest[50];
	char src[] = "Hello";
	unsigned int size = 2;

	printf("Return value: %d\n", ft_strlcpy(dest, src, size));
	printf("Result: %s\n", dest);
	return (0);
} */
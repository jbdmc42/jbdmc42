/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdmc <jbdmc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:12:12 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/08 17:36:49 by jbdmc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*upcase(char *str, int i)
{
	if (str[i + 1] > 96 && str[i + 1] < 123)
	{
		str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}

char	*put_up(char *str)
{
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - 32;
	}
	return (str);
}

char	*aux(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] > 64 && str[j] < 91)
		{
			str[j] = str[j] + 32;
		}
		j++;
	}
	return (str);
}

char	*ft_strcapilatize(char *str)
{
	int	i;

	i = 0;
	str = aux(str);
	str = put_up(str);
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 48)
			upcase(str, i);
		else if (str[i] > 57 && str[i] < 65)
			upcase(str, i);
		else if (str[i] > 90 && str[i] < 97)
			upcase(str, i);
		else if (str[i] > 122 && str[i] < 127)
			upcase(str, i);
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	s[] = "oLa, tudO bem? 42pAlavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", s);
	ft_strcapilatize(s);
	printf("%s\n\n", s);

	char	s2[] = "-hello wORLD, how aRe YoU t0dAY? i'm fine ToO.";
	printf("%s\n", s2);
	ft_strcapilatize(s2);
	printf("%s\n", s2);
} */
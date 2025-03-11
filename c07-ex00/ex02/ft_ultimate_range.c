/* #include <stdio.h> */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

/* int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	val;

	i = 0;
	res = 0;
	val = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			val = -val;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res * val);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	arr[2];
	int *arr2;
	int size;

	i = 1;
	j = 0;
	if (argc == 3)
	{
		while (i < argc)
		{
			arr[j] = ft_atoi(argv[i]);
			i++;
			j++;
		}
		if(ft_ultimate_range(&arr2, arr[0], arr[1]) > 0)
		{
			size = ft_ultimate_range(&arr2, arr[0], arr[1]);
			printf("%d", size);
			free(arr2);
		}
	}
	return (0);
} */
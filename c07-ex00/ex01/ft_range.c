#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 1;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * 4);
	range[0] = min;
	while (max > min)
	{
		range[i] = min + i;
		i++;
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d", range[i]);
		i++;
	}
	return (range);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	val;

	i = 0;
	res = 0;
	val = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		val = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
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
		arr2 = ft_range(arr[0], arr[1]);
		free(arr2);
	}
	return (0);
}
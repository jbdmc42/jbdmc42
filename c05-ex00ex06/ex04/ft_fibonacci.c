//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	indexval;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	indexval = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (indexval);
}

/*int main(void)
{
	int	index;

	index = -1;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 0;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 1;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 2;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 3;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 4;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 5;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 6;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 7;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 8;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 9;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 10;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 11;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 12;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 13;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 14;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 15;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 16;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 17;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 18;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 19;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 20;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 21;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	index = 22;
	printf("The value for the index %d is: %d\n", index, ft_fibonacci(index));
	return (0);
}*/
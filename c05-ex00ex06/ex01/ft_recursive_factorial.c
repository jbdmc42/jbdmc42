//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	nb = 5;
	printf("Factorial of %d is %d", nb, ft_recursive_factorial(nb));
	return (0);
}*/
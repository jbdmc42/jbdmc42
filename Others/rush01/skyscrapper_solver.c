#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ver_input(char *input)
{
	char	*valid;
	int		i;

	i = 0;
	valid = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	while (*input)
	{
		if (input[i] == valid[i])
		{
			i++;
		}
		else
		{
			write(1, "Error\n", 7);
			return (0);
		}
	}
	write(1, "Valid input:\n", 13);
	printf("%s", input);
	return (0);
}

char	*copy_input(int argc, char *argv[])
{
	int	i;
	int	j;
	char input[1024];

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			input[j] = argv[i][j];
			j++;
		}
		i++;
		input[j] = '\0';
	}
	return (input);
}

int	main(int argc, char *argv[])
{
	char	*input;

	input = (char *)malloc(1024);
	if (argc == 2)
	{
		input = copy_input(argc, argv);
		ver_input(input);
	}
	else
	{
		write(1, "Error\n", 7);
	}
	return (0);
}
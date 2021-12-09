#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_firstword(char *str)
{
	int	i;

	i = 0;
	if (str[i] == ' ')
	{
		while (str[i] == ' ')
		{
			i++;
		}
	}
	while (str[i] != ' ')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_firstword(argv[1]);
	}
	return (0);
}

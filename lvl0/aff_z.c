#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	else if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] == 'z')
			{
				ft_putchar('z');
				ft_putchar('\n');
			}
			*argv[1]++;
		}
	}
	else if (argc == 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	return (0);
}

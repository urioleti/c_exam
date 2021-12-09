#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	str = argv[argc - 1];
	if (argc >= 2)
	{
		i = 0;
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}

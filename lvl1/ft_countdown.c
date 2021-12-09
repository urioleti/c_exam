#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int	n;

	n = '9';
	while (n >= '0')
	{
		ft_putchar(n);
		n--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_countdown();
	return (0);
}

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	even;
	char	odd;
	int		l;

	even = 'Y';
	odd = 'z';
	l = 26;
	while (l > 0)
	{
		ft_putchar(odd);
		odd--;
		odd--;
		l--;
		ft_putchar(even);
		even--;
		even--;
		l--;
	}
	ft_putchar('\n');
	return (0);
}

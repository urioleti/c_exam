/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarrera <ocarrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:31:36 by ocarrera          #+#    #+#             */
/*   Updated: 2021/12/08 17:42:46 by ocarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print(void)
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
	print();
	return (0);
}

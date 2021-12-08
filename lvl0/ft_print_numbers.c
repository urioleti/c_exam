/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarrera <ocarrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:44:22 by ocarrera          #+#    #+#             */
/*   Updated: 2021/12/08 17:49:43 by ocarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}

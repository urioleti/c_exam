/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarrera <ocarrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:55:53 by ocarrera          #+#    #+#             */
/*   Updated: 2021/12/08 18:04:36 by ocarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_maff_alpha(void)
{
	int	uppercase;
	int	lowercase;
	int	l;

	l = 1;
	lowercase = 'a';
	uppercase = 'B';
	while (l <= 26)
	{
		ft_putchar(lowercase);
		lowercase++;
		lowercase++;
		ft_putchar(uppercase);
		uppercase++;
		uppercase++;
		l++;
		l++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_maff_alpha();
	return (0);
}

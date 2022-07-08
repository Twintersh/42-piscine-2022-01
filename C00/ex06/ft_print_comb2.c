/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:47:39 by twinters          #+#    #+#             */
/*   Updated: 2022/01/17 08:53:41 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void);
void	ft_wrtnb(int i);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			if (n2 != 1 || n1 != 0)
				write(1, ", ", 2);
			ft_wrtnb(n1);
			write(1, " ", 1);
			ft_wrtnb(n2);
			n2++;
		}
		n2 = ++n1 + 1;
	}
}

void	ft_wrtnb(int i)
{
	char	c1;

	if (i < 10 )
	{
		c1 = '0' + i;
		ft_putchar('0');
		ft_putchar(c1);
	}
	else
	{
		ft_putchar('0' + (i / 10));
		ft_putchar('0' + (i % 10));
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

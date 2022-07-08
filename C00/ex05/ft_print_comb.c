/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 09:39:06 by twinters          #+#    #+#             */
/*   Updated: 2022/01/14 11:10:47 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' )
	{
		while (b <= '8' )
		{
			while (c <= '9' )
			{
				if (c != '2' )
					write(1, ", ", 2);
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}

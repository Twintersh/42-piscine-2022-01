/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:11:31 by twinters          #+#    #+#             */
/*   Updated: 2022/01/22 20:08:05 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr_non_printable(char *str);
void	ft_jeanne(int nb, int j);

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			if ((unsigned char)str[i] < 16)
				j = 1;
			ft_jeanne((unsigned char)str[i], j);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	ft_jeanne(int nb, int j)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_jeanne(nb / 16, 0);
		nb %= 16;
	}
	if (nb < 16)
	{
		if (j)
			ft_putchar('0');
		ft_putchar(base[nb]);
	}
}











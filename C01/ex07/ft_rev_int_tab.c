/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:53:05 by twinters          #+#    #+#             */
/*   Updated: 2022/01/18 10:53:08 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	i;

	if (size <= 0 )
		return ;
	i = size - 1;
	j = 0;
	while (i >= (size / 2))
	{
		ft_swap(&tab[i], &tab[j]);
		j++;
		i--;
	}
}

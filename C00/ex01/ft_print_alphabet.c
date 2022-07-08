/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:44:17 by twinters          #+#    #+#             */
/*   Updated: 2022/01/13 20:51:30 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	lettre;

	lettre = 'a';
	while (lettre != 'z' + 1)
	{
		write(1, &lettre, 1);
		lettre++;
	}
}

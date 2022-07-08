/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaptalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:39:12 by twinters          #+#    #+#             */
/*   Updated: 2022/05/18 15:45:07 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
int		nbr_alpha(char str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
			&& nbr_alpha(str[i - 1]) == 1)
			str[i] -= 32;
		else if (('A' <= str[i] && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	nbr_alpha(char str)
{
	if ('A' <= str && str <= 'Z')
		return (0);
	else if ('a' <= str && str <= 'z')
		return (0);
	else if ('0' <= str && str <= '9')
		return (0);
	else
		return (1);
}

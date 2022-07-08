/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:13:06 by twinters          #+#    #+#             */
/*   Updated: 2022/01/31 18:06:08 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	to_find_check(char *str, char *to_find, int i);
int	ft_strlen(char *s);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0] && to_find_check(str, to_find, i))
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	to_find_check(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j] == str[i])
	{
		i++;
		j++;
	}
	if (j > ft_strlen(to_find))
		return (1);
	else
		return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

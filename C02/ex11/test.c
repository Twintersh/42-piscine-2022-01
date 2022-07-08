/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:09:53 by twinters          #+#    #+#             */
/*   Updated: 2022/01/22 19:20:12 by twinters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    hexaprint(unsigned char a);

void    ft_putstr_non_printable(char *str)
{
    int count;

    count = 0;
    while (str[count])
    {
        if (str[count] < ' ' || str[count] > '~')
            hexaprint((unsigned char)str[count]);
        else
            write(1, &str[count], 1);
        count++;
    }
}

void    hexaprint(unsigned char a)
{
    char    hex_value[2];
    int     int_value;

    int_value = a / 16;
    if (int_value > 9)
        hex_value[0] = int_value - 10 + 'a';
    else
        hex_value[0] = int_value + '0';
    int_value = a % 16;
    if (int_value > 9)
        hex_value[1] = int_value - 10 + 'a';
    else
        hex_value[1] = int_value + '0';
    write(1, "\\", 1);
    write(1, hex_value, 2);
}

int main()
{
	ft_putstr_non_printable("salut\ncomment\0ca va");
	return 0;
}

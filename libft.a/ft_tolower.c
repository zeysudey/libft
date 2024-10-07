/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:30:08 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/07 14:50:27 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char *c)
{
    int i = 0;
    while (c[i])
    {
        write(1, &c[i], 1);
        i++;
    }
}
char *ft_tolower(char *str)
{

    int i = 0;

    while (str[i])
    {
        if (str[i] > 64 && str[i] < 98)
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}
int main()
{
    char arr[] = "ZEY";

    ft_putchar(ft_tolower(arr));
    }
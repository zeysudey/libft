/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:08:51 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/07 15:14:40 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    

#include <stdio.h>
int ft_isdigit(int x){
    if(x>=0 && x<=9){
        return 1;
    }
    else
    return 0;
}
int main()
{
    printf("%d",ft_isdigit(3));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:33:57 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/07 17:03:15 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c){
    if(c>=0 && c<=127)
        return 1;
    else 
        return 0;
}

int main(){
    printf("%d",ft_isascii('a'));
}
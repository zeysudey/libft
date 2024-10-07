/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:52:46 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/07 15:07:50 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_isalpha(char c){
 if(c>='A' && c<='Z' || c>='a' && c<='z')
 {
    return 1;
 }   
 else
 return 0;
}

int main(){
   printf("%d",ft_isalpha('c')); 
}

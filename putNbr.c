/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putNbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharapi <bharapi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:14:33 by bharapi           #+#    #+#             */
/*   Updated: 2026/04/10 09:11:11 by bharapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putChar(char c){
    write(1, &c, 1);
}

 void putNbr(int nbr)
 {
    long n;
    n = nbr;
    
    if(n < 0)
    {
        n = -n;
        write(1, "-", 1);
    }
    if (n > 9)
    {
        putNbr(n / 10);
    }
    putChar((n % 10) + '0');   
 }

 int main(void)
 {
    putNbr(-45678);
    write(1, "\n", 1);
 }
 
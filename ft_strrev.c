/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharapi <bharapi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 04:45:17 by bharapi           #+#    #+#             */
/*   Updated: 2026/04/10 10:22:14 by bharapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;
    i = 0;
    j = 0;
    while(str[i])
    {
        i++;
    }
    i--;
    while(i > j )
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
    i = 0;
    while(str[i])
    {
    write(1, &str[i], 1);
    i++;
    }
}

int main(void){
    char str[] = "asdf";
    ft_strrev(str);
    write(1, "\n", 1);
    return 0;
}
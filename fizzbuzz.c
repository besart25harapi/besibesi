/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharapi <bharapi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 04:47:42 by bharapi           #+#    #+#             */
/*   Updated: 2026/04/10 04:00:57 by bharapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void putNbr(int i)
// {
//     if(i<10)
//     {
//     i = '0' + i;
//     write(1, &i, 1);
//     }
//     else
//     {
//     char c1 = '0' + (i / 10);
//     char c2 = '0' + (i % 10);
//     write(1, &c1, 1);
//     write(1, &c2, 1);
//     }
// }

// void fizzbuzz(void)
// {
//     int i = 1;
//     while( i < 101)
//     {
//         if(i % 3 == 0 && i % 5 == 0)
//             write(1, "fizzbuzz", 8);
//         else if(i % 3 == 0)
//             write(1, "fizz", 4);
//         else if(i %5 == 0)
//             write(1, "buzz", 4);
//         else
//         putNbr(i);
//         write(1, "\n", 1);
//         i++;
//     }
// }
// int main(void)
// {
//     fizzbuzz();
// }


void putNbr(int i)
{
    if(i < 10)
    {
        i = '0' + i;
        write(1, &i, 1);
    }
    else
    {
        char c1 = '0' + (i / 10);
        char c2 = '0' + (i % 10);    
        write(1, &c1, 1);
        write(1, &c2, 1);
    }
}

void fizzbuzz()
{
    int i = 1;
    while(i < 101)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putNbr(i);
        write(1, "\n", 1);
        i++;
    }    
}

int main(void)
{
    fizzbuzz();
}

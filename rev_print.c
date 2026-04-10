/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharapi <bharapi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 04:01:56 by bharapi           #+#    #+#             */
/*   Updated: 2026/04/10 04:19:58 by bharapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_rev_print(char *str)
// {
//     int i;
//     i = 0;
//     while(str[i])
//         i++;
//     i--;
//     while(str[i])
//     {
//         write(1, &str[i], 1);
//         i--;
//     }
//     write(1, "\n", 1);
// }

// int main(void) {
//     ft_rev_print("asd");
// }


#include <unistd.h>

void	ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
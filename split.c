/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharapi <bharapi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 09:37:25 by bharapi           #+#    #+#             */
/*   Updated: 2026/04/10 09:57:30 by bharapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	is_sep(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
int	count_words(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !is_sep(str[i]))
		{
			counter++;
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	return (counter);
}

char	*wordup(char *str, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start) + 1);
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i++] = str[start++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;

	int words;
	char **result;

	words = count_words(str);
	result = malloc(sizeof(char *) * words + 1);
	if (!result)
		return (NULL);

	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		k = i;
		while (str[i] && !is_sep(str[i]))
			i++;
		if (k < i)
		{
			result[j++] = wordup(str, k, i);
		}
	}
	result[j] = NULL;
    return(result);
}

int main()
{
    char *str = " era meco 245";
    char **new;
    new = ft_split(str);
    int i =0;
    while(new[i])
    {
        printf("%s\n", new[i]);
        i++;
    }

    return(0);
}
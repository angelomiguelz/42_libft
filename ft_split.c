/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:55:20 by mzarichn          #+#    #+#             */
/*   Updated: 2022/11/03 14:49:13 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*first_string(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i])
	{
		if ((char)s[i] == c)
			break ;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

char	*second_string(char const *s, char c)
{
	int		i;
	int		end_len;
	char	*str;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if ((char)s[i] == c)
			break ;
		i--;
	}
	end_len = ft_strlen(s) - i;
	str = malloc(sizeof(char) * (end_len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &s[i + 1], end_len);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	*str1;
	char	*str2;

	str1 = first_string(s, c);
	str2 = second_string(s, c);
	if (!str1 || !str2)
		return (0);
	printf("str1:%s\n", first_string(s, c));
	printf("str2:%s\n", second_string(s, c));
	return (0);
}

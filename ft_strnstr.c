/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:04:36 by mzarichn          #+#    #+#             */
/*   Updated: 2022/10/26 16:49:59 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	The strnstr() function locates the first occurrence of the null-terminated 
*	string needle in the string haystack, where not more than len characters are 
*	searched.  Characters that appear after a `\0' character are not searched.
*	RETURN VALUES
*	If needle is an empty string, haystack is returned; if needle occurs nowhere 
*	in haystack, NULL is returned; otherwise a pointer to the first character of 
*	the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	hay = (char *)haystack;
	i = 0;
	if (!needle)
		return (hay);
	while (hay[i])
	{
		j = 0;
		while (hay[i + j] == needle[j] && (i + j) < len)
		{
			if (hay[i + j] == '\0' && needle[j] == '\0')
				return (&hay[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:39:59 by mzarichn          #+#    #+#             */
/*   Updated: 2022/11/02 17:16:44 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
*	NUL-terminating the result if dstsize is not 0.
*	RETURN VALUES
*	the strlcpy() function returns the length of the string it tried to create.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	if (!dest || !src)
		return (0);
	srclen = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (srclen);
}

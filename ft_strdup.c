/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:35:35 by mzarichn          #+#    #+#             */
/*   Updated: 2022/11/02 20:27:06 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen((char *)s1);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	while (++i < len && s1[i])
		dup[i] = s1[i];
	dup[i] = 0;
	return (dup);
}

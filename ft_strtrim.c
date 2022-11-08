/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:54:09 by mzarichn          #+#    #+#             */
/*   Updated: 2022/11/03 12:06:08 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (0);
	front = 0;
	end = ft_strlen(s1);
	while (s1[front] && ft_strchr(set, s1[front]))
		front++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc(sizeof(char) * (end - front + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[front], end - front + 1);
	return (str);
}

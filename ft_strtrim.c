/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:54:09 by mzarichn          #+#    #+#             */
/*   Updated: 2022/10/29 16:11:48 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
*	specified in ’set’ removed from the beginning and the end of the string.
*	PARAMETERS
*	#1. The string to be trimmed.
*	#2. The reference set of characters to trim.
*	RETURN VALUES
*	The trimmed string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);
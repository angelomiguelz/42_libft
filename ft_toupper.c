/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarichn <mzarichn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:13:33 by mzarichn          #+#    #+#             */
/*   Updated: 2022/10/25 17:30:03 by mzarichn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
If c is a lowercase letter, toupper() returns its uppercase equivalent.

The value returned is that of the converted letter, 
or c if the conversion was not possible.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

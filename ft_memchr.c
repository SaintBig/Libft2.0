/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:31:40 by jleal             #+#    #+#             */
/*   Updated: 2025/04/18 14:59:22 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate byte in byte string
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	a;

	if (!s || n == 0)
		return (NULL);
	ptr = (unsigned char *) s;
	a = (unsigned char) c;
	while (n-- > 0)
	{
		if (*ptr == a)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}

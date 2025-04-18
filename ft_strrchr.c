/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libc04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:43:55 by jleal             #+#    #+#             */
/*   Updated: 2025/04/18 09:33:22 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			a;
	char			*ptr;
	unsigned int	i;

	a = (char) c;
	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			ptr = (char *) &s[i];
		i++;
	}
	if (s[i] == a)
		ptr = (char *) &s[i];
	return (ptr);
}

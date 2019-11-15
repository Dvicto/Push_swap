/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:11:41 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/15 15:11:26 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*c;
	size_t	i;

	c = dest;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = (char)*src;
		i++;
		src++;
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (c);
}

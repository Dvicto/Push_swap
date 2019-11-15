/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:11:54 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/15 15:07:12 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (size + 1 < size)
		return (NULL);
	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero((void *)s, size);
	s[size] = '\0';
	return (s);
}

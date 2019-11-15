/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:12:19 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/15 15:10:38 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(str = ft_strnew(len)) || !s)
		return (NULL);
	s = s + start;
	str = ft_strncpy(str, (char *)s, (unsigned int)len);
	return (str);
}

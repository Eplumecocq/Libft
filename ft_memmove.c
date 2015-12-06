/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:39:57 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/05 14:46:03 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	tab[len];

	i = 0;
	while (i < len)
	{
		tab[i] = ((unsigned char*)(src))[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char*)(dst))[i] = tab[i];
		i++;
	}
	return (dst);
}

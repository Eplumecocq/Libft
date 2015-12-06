/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:41:49 by eplumeco          #+#    #+#             */
/*   Updated: 2015/11/30 16:15:15 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*nw;

	if ((!(nw = (char *)malloc(sizeof(char) * (size + 1)))))
		return (NULL);
	ft_strclr(nw);
	return (nw);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.21school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:04:10 by smorty            #+#    #+#             */
/*   Updated: 2019/05/17 22:55:00 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fresh;

	if (!(fresh = (void *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}

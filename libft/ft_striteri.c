/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:55:06 by dleong            #+#    #+#             */
/*   Updated: 2017/11/05 15:47:11 by dleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int				i;
	unsigned int	j;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		j = i;
		f(j, &s[i]);
		i++;
	}
}

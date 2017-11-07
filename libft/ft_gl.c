/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 23:41:30 by dleong            #+#    #+#             */
/*   Updated: 2017/11/05 15:41:45 by dleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_gl(char const *s, char c)
{
	int	i;

	i = 0;
	if (!s || !c)
		return (0);
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
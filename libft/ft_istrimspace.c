/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istrimspace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:37:14 by dleong            #+#    #+#             */
/*   Updated: 2017/11/05 15:42:46 by dleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_istrimspace(int c)
{
	if ((c >= 9 && c <= 10) || c == 32)
		return (1);
	return (0);
}
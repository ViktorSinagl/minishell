/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isallnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:28:12 by vsinagl           #+#    #+#             */
/*   Updated: 2023/10/16 14:28:13 by vsinagl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
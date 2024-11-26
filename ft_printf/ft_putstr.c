/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:51:20 by mouad             #+#    #+#             */
/*   Updated: 2024/11/26 18:03:59 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;

	if(!str)
	{
		count += ft_putstr("(null)");
		return(count);
	}
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	return (count);
}

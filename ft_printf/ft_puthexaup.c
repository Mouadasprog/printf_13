/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:44:13 by mouad             #+#    #+#             */
/*   Updated: 2024/11/26 17:19:30 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexaup(unsigned int n)
{
	char	*hex_numbers;
	int		count;

	hex_numbers = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthexaup(n / 16);
	}
	count += ft_putchar(hex_numbers[n % 16]);
	return (count);
}
